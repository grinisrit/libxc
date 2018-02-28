# Libxc

Libxc is a library of exchange-correlation functionals for
density-functional theory. The aim is to provide a portable, well
tested and reliable set of exchange and correlation functionals that
can be used by a variety of programs.

For more information, please check the manual at
http://www.tddft.org/programs/Libxc

## INSTALLATION

### Autotools

The recommended way to install the library is by using GNU Autotools.

To install the library, just use the standard procedure:
```
./configure --prefix=PATH/TO/LIBXC
make
make check
make install
```

If you're not using a stable release tarball, you'll first need to
generate ```configure``` with ```autoreconf -i```.


### CMake

Support for CMake has also been recently contributed by Lori Burns.

The CMake file has the following caveats

* tested on Linux and Mac, static and shared lib, namespaced and non-namespaced headers, but really only to the extent that it works for Psi4
* all the fancy libtool options and Fortran interface _not_ tested
* test suite executed after build via `ctest`. But it has always totally passed or totally failed, which doesn't inspire confidence
* The generated `libxc_docs.txt` is large, and the generation step sometimes balks on it, leading to `xc_funcs.h` not found errors. Just execute again.

#### Building with CMake

Use the following procedure:

```bash
cmake -H. -Bobjdir
cd objdir && make
make test
make install
```

The build is also responsive to

* static/shared toggle `BUILD_SHARED_LIBS`
* install location `CMAKE_INSTALL_PREFIX`
* namespacing of headers `NAMESPACE_INSTALL_INCLUDEDIR`
* of course, `CMAKE_C_COMPILER`, `BUILD_TESTING`, and `CMAKE_C_FLAGS`

See [CMakeLists.txt](CMakeLists.txt) for options details. All these build options should be passed as `cmake -DOPTION`.

#### Detecting with CMake

CMake builds install with `LibxcConfig.cmake`, `LibxcConfigVersion.cmake`, and `LibxcTargets.cmake` files suitable for use with CMake [`find_package()`](https://cmake.org/cmake/help/v3.2/command/find_package.html) in `CONFIG` mode.

* `find_package(Libxc)` - find any xc libraries and headers
* `find_package(Libxc 3.0.0 EXACT CONFIG REQUIRED COMPONENTS static)` - find Libxc exactly version 3.0.0 built with static libraries or die trying

See [cmake/LibxcConfig.cmake.in](cmake/LibxcConfig.cmake.in) for details of how to detect the Config file and what CMake variables and targets are exported to your project.

#### Use with CMake

After `find_package(Libxc ...)`,

* test if package found with `if(${Libxc_FOUND})` or `if(TARGET Libxc::xc)`
* link to library (establishes dependency), including header and definitions configuration with `target_link_libraries(mytarget Libxc::xc)`
* include header files using `target_include_directories(mytarget PRIVATE $<TARGET_PROPERTY:Libxc::xc,INTERFACE_INCLUDE_DIRECTORIES>)`
* compile target applying `-DUSING_Libxc` definition using `target_compile_definitions(mytarget PRIVATE $<TARGET_PROPERTY:Libxc::xc,INTERFACE_COMPILE_DEFINITIONS>)`


#### Python Library

Optional Python bindings are available through the cytpes module. To install
into Python site-packages plese run:
`python setup.py install`

or, to install locally for development:
`python setup.py develop`

The Python bindings require the CMake compilation pathway and the Python
Numerical Python library. A short usage example is provided below:
```python
# Build functional
>>> func = pylibxc.LibXCFunctional("gga_c_pbe", "unpolarized")

# Create input
>>> inp = {}
>>> inp["rho"] = np.random.random((3))
>>> inp["sigma"] = np.random.random((3))

# Compute
>>> ret = func.compute(inp)
>>> for k, v in ret.items():
>>>     print(k, v)

zk [[-0.06782171 -0.05452743 -0.04663709]]
vrho [[-0.08349967 -0.0824188  -0.08054892]]
vsigma [[ 0.00381277  0.00899967  0.01460601]]
```

## FILE ORGANIZATION

The distribution is organized as follows

| | |
| --- | --- |
| ./cmake | CMake helper files |
| ./build | pkgconfig and Fedora spec files |
| ./m4 | m4 scripts used by configure.ac, and libxc.m4 used by other projects linking to libxc |
| ./maple |the Maple source code for the functionals |
| ./scripts | various scripts for libxc development |
| ./src | source files |
| ./testsuite | regression tests |

The most important contents of the src directory for users are

| | |
| ------------------- | ---------------------------------------------- |
| xc.h                | main header file with all external definitions |
| xc_funcs.h	      | automatically generated file with the list of functionals |

In addition, developers will be interested in the following

| | |
| ------------------- | ---------------------------------------------- |
| util.h              | header file with internal definitions |
| \*.f90 \*.F90 xc_f.c string_f.h | Fortran 90 interface |
| \*.f03 \*.F03         | Fortran 2003 interface |
| funcs_*.c	      | automatically generated files with the functional definitions |
| functionals.c       | generic interface to simplify access to the different families |
| lda.c gga.c mgga.c  | interface to the different families of functionals |
| special_functions.c | implementation of a series of special functions |
| hyb_gga_*.c         | definition of the different hybrid GGA functionals |
| hyb_mgga_*.c         | definition of the different hybrid meta-GGA functionals |
| lda_*.c             | definition of the different LDA functionals |
| gga_*.c             | definition of the different GGA functionals |
| mgga_*.c	      | definition of the different meta-GGA functionals |
| work_lda.c          | code that simplifies the implementation of LDAs |
| work_gga_x.c        | code that simplifies the implementation of exchange GGAs |
| work_gga_c.c	      | code that simplifies the implementation of some correlation GGAs |
| work_mgga_x.c       | code that simplifies the implementation of exchange meta-GGAs |
| work_mgga_c.c       | code that simplifies the implementation of some correlation meta-GGAs |

Notes:

* Most functionals use the framework contained in a work\_\*.c file. This simplifies tremendously the implementation of the different functionals. The work\_\*.c are #include'd in the functional implementations through a preprocessor directive.
* Some files contain more than one functional, as similar functionals are usually grouped together. Therefore, the best way to find where a functional is implemented is by looking at its keyword in xc_funcs.h and using grep to find the correct file.
* The files where the functionals are defined are named as family_type_name.c, where:
  family - functional family (lda, gga, hyb_gga, or mgga)
  type   - type of functional (x, c, xc, or k)
  name   - name of the functional or class of functionals
