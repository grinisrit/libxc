/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_gk72.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


GPU_FUNCTION static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t10, t11, t12, t13, t20, t23, t25, t29;
  double t30, t35, t37, t38, t42, t44, t48, t52;

#ifndef XC_DONT_COMPILE_VXC
  double t53, t56, t57, t67, t68, t69, t77, t78;
  double t82, t83;

#ifndef XC_DONT_COMPILE_FXC
  double t86, t87, t90, t91, t101, t104, t105, t106;
  double t107, t109, t110, t113, t123, t124, t130, t131;

#ifndef XC_DONT_COMPILE_KXC
  double t134, t135, t138, t139, t150, t151, t152, t153;
  double t157, t158, t161, t171, t172, t180, t181;

#ifndef XC_DONT_COMPILE_LXC
  double t186, t187, t200, t204, t208, t213, t216, t221;
  double t238, t239;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = t6 / t7;
  t10 = t4 * t9;
  t11 = t10 / 0.4e1;
  t12 = t11 < 0.7e0;
  t13 = log(t11);
  t20 = t11 < 0.10e2;
  t23 = t1 * t1;
  t25 = t23 / t3;
  t29 = sqrt(0.4e1);
  t30 = sqrt(t10);
  t35 = t3 * t3;
  t37 = t1 / t35;
  t38 = t7 * t7;
  t42 = t23 * t35;
  t44 = t5 / t38;
  t48 = 0.1e1 / t30 / t42 / t44 / 0.4e1;
  t52 = my_piecewise3(t20, -0.6156e-1 + 0.1898e-1 * t13, 0.14600000000000000000e0 * t25 * t5 * t7 + 0.53000000000000000000e1 * t29 / t30 / t10 - 0.49000000000000000000e0 * t37 * t6 * t38 - 0.64000000000000000000e1 * t29 * t48);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = my_piecewise3(t12, 0.311e-1 * t13 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t9 * t13 - 0.42500000000000000000e-2 * t10, t52);

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t53 = 0.1e1 / rho[0];
  t56 = 0.1e1 / t7 / rho[0];
  t57 = t6 * t56;
  t67 = pow(0.4e1, 0.1e1 / 0.6e1);
  t68 = t67 * t48;
  t69 = t4 * t56;
  t77 = 0.1e1 / t30 / t2 / t53 / 0.48e2;
  t78 = t67 * t77;
  t82 = my_piecewise3(t20, -0.63266666666666666667e-2 * t53, 0.48666666666666666667e-1 * t25 * t44 + 0.10600000000000000000e2 * t68 * t69 - 0.32666666666666666667e0 * t37 * t9 - 0.21333333333333333333e2 * t78 * t69);
  t83 = my_piecewise3(t12, -0.10366666666666666667e-1 * t53 - 0.75000000000000000000e-3 * t4 * t57 * t13 + 0.66666666666666666670e-3 * t4 * t57, t82);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = rho[0] * t83 + (my_piecewise3(t12, 0.311e-1 * t13 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t9 * t13 - 0.42500000000000000000e-2 * t10, t52));

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t86 = rho[0] * rho[0];
  t87 = 0.1e1 / t86;
  t90 = 0.1e1 / t7 / t86;
  t91 = t6 * t90;
  t101 = t5 / t38 / rho[0];
  t104 = t67 * t67;
  t105 = t104 * t104;
  t106 = t105 * t67;
  t107 = t106 * t77;
  t109 = 0.1e1 / t38 / t86;
  t110 = t42 * t109;
  t113 = t4 * t90;
  t123 = 0.1e1 / t30 / t1 / t3 / t2 / t57 / 0.48e2;
  t124 = t106 * t123;
  t130 = my_piecewise3(t20, 0.63266666666666666667e-2 * t87, -0.32444444444444444445e-1 * t25 * t101 + 0.88333333333333333333e1 * t107 * t110 - 0.14133333333333333333e2 * t68 * t113 + 0.10888888888888888889e0 * t37 * t57 - 0.24888888888888888889e2 * t124 * t110 + 0.28444444444444444444e2 * t78 * t113);
  t131 = my_piecewise3(t12, 0.10366666666666666667e-1 * t87 + 0.10000000000000000000e-2 * t4 * t91 * t13 - 0.63888888888888888893e-3 * t4 * t91, t130);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = rho[0] * t131 + 0.2e1 * t83;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t134 = t86 * rho[0];
  t135 = 0.1e1 / t134;
  t138 = 0.1e1 / t7 / t134;
  t139 = t6 * t138;
  t150 = t29 * t123;
  t151 = t86 * t86;
  t152 = 0.1e1 / t151;
  t153 = t2 * t152;
  t157 = 0.1e1 / t38 / t134;
  t158 = t42 * t157;
  t161 = t4 * t138;
  t171 = 0.1e1 / t30 / t23 / t35 / t2 / t101 / 0.192e3;
  t172 = t29 * t171;
  t180 = my_piecewise3(t20, -0.12653333333333333333e-1 * t135, 0.54074074074074074075e-1 * t25 * t5 * t109 + 0.12366666666666666667e3 * t150 * t153 - 0.35333333333333333332e2 * t107 * t158 + 0.32977777777777777777e2 * t68 * t161 - 0.14518518518518518519e0 * t37 * t91 - 0.44800000000000000000e3 * t172 * t153 + 0.99555555555555555556e2 * t124 * t158 - 0.66370370370370370369e2 * t78 * t161);
  t181 = my_piecewise3(t12, -0.20733333333333333334e-1 * t135 - 0.23333333333333333333e-2 * t4 * t139 * t13 + 0.11574074074074074075e-2 * t4 * t139, t180);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = rho[0] * t181 + 0.3e1 * t131;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t186 = 0.1e1 / t7 / t151;
  t187 = t6 * t186;
  t200 = t151 * rho[0];
  t204 = 0.1e1 / t7 / t200 * t1 * t3;
  t208 = t2 / t200;
  t213 = t42 / t38 / t151;
  t216 = t4 * t186;
  t221 = M_PI * M_PI;
  t238 = my_piecewise3(t20, 0.37959999999999999999e-1 * t152, -0.14419753086419753087e0 * t25 * t5 * t157 + 0.74200000000000000002e3 * t67 * t171 * t2 * t204 - 0.98933333333333333333e3 * t150 * t208 + 0.15703703703703703703e3 * t107 * t213 - 0.10992592592592592592e3 * t68 * t216 + 0.33876543209876543211e0 * t37 * t139 - 0.14259259259259259259e1 * t67 / t30 * t221 / t87 * t2 * t204 + 0.35840000000000000000e4 * t172 * t208 - 0.44246913580246913580e3 * t124 * t213 + 0.22123456790123456790e3 * t78 * t216);
  t239 = my_piecewise3(t12, 0.62200000000000000002e-1 * t152 + 0.77777777777777777777e-2 * t4 * t187 * t13 - 0.30802469135802469139e-2 * t4 * t187, t238);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = rho[0] * t239 + 0.4e1 * t181;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


GPU_FUNCTION static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t10, t11, t12, t13, t20, t23, t25, t29;
  double t30, t35, t37, t38, t42, t44, t48, t52;

#ifndef XC_DONT_COMPILE_VXC
  double t53, t56, t57, t67, t68, t69, t77, t78;
  double t82, t83;

#ifndef XC_DONT_COMPILE_FXC
  double t86, t87, t90, t91, t101, t104, t105, t106;
  double t107, t109, t110, t113, t123, t124, t130, t131;

#ifndef XC_DONT_COMPILE_KXC
  double t134, t135, t138, t139, t150, t151, t152, t153;
  double t157, t158, t161, t171, t172, t180, t181;

#ifndef XC_DONT_COMPILE_LXC
  double t186, t187, t200, t204, t208, t213, t216, t221;
  double t238, t239;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = t6 / t7;
  t10 = t4 * t9;
  t11 = t10 / 0.4e1;
  t12 = t11 < 0.7e0;
  t13 = log(t11);
  t20 = t11 < 0.10e2;
  t23 = t1 * t1;
  t25 = t23 / t3;
  t29 = sqrt(0.4e1);
  t30 = sqrt(t10);
  t35 = t3 * t3;
  t37 = t1 / t35;
  t38 = t7 * t7;
  t42 = t23 * t35;
  t44 = t5 / t38;
  t48 = 0.1e1 / t30 / t42 / t44 / 0.4e1;
  t52 = my_piecewise3(t20, -0.6156e-1 + 0.1898e-1 * t13, 0.14600000000000000000e0 * t25 * t5 * t7 + 0.53000000000000000000e1 * t29 / t30 / t10 - 0.49000000000000000000e0 * t37 * t6 * t38 - 0.64000000000000000000e1 * t29 * t48);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = my_piecewise3(t12, 0.311e-1 * t13 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t9 * t13 - 0.42500000000000000000e-2 * t10, t52);

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t53 = 0.1e1 / rho[0];
  t56 = 0.1e1 / t7 / rho[0];
  t57 = t6 * t56;
  t67 = pow(0.4e1, 0.1e1 / 0.6e1);
  t68 = t67 * t48;
  t69 = t4 * t56;
  t77 = 0.1e1 / t30 / t2 / t53 / 0.48e2;
  t78 = t67 * t77;
  t82 = my_piecewise3(t20, -0.63266666666666666667e-2 * t53, 0.48666666666666666667e-1 * t25 * t44 + 0.10600000000000000000e2 * t68 * t69 - 0.32666666666666666667e0 * t37 * t9 - 0.21333333333333333333e2 * t78 * t69);
  t83 = my_piecewise3(t12, -0.10366666666666666667e-1 * t53 - 0.75000000000000000000e-3 * t4 * t57 * t13 + 0.66666666666666666670e-3 * t4 * t57, t82);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = rho[0] * t83 + (my_piecewise3(t12, 0.311e-1 * t13 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t9 * t13 - 0.42500000000000000000e-2 * t10, t52));

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t86 = rho[0] * rho[0];
  t87 = 0.1e1 / t86;
  t90 = 0.1e1 / t7 / t86;
  t91 = t6 * t90;
  t101 = t5 / t38 / rho[0];
  t104 = t67 * t67;
  t105 = t104 * t104;
  t106 = t105 * t67;
  t107 = t106 * t77;
  t109 = 0.1e1 / t38 / t86;
  t110 = t42 * t109;
  t113 = t4 * t90;
  t123 = 0.1e1 / t30 / t1 / t3 / t2 / t57 / 0.48e2;
  t124 = t106 * t123;
  t130 = my_piecewise3(t20, 0.63266666666666666667e-2 * t87, -0.32444444444444444445e-1 * t25 * t101 + 0.88333333333333333333e1 * t107 * t110 - 0.14133333333333333333e2 * t68 * t113 + 0.10888888888888888889e0 * t37 * t57 - 0.24888888888888888889e2 * t124 * t110 + 0.28444444444444444444e2 * t78 * t113);
  t131 = my_piecewise3(t12, 0.10366666666666666667e-1 * t87 + 0.10000000000000000000e-2 * t4 * t91 * t13 - 0.63888888888888888893e-3 * t4 * t91, t130);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = rho[0] * t131 + 0.2e1 * t83;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t134 = t86 * rho[0];
  t135 = 0.1e1 / t134;
  t138 = 0.1e1 / t7 / t134;
  t139 = t6 * t138;
  t150 = t29 * t123;
  t151 = t86 * t86;
  t152 = 0.1e1 / t151;
  t153 = t2 * t152;
  t157 = 0.1e1 / t38 / t134;
  t158 = t42 * t157;
  t161 = t4 * t138;
  t171 = 0.1e1 / t30 / t23 / t35 / t2 / t101 / 0.192e3;
  t172 = t29 * t171;
  t180 = my_piecewise3(t20, -0.12653333333333333333e-1 * t135, 0.54074074074074074075e-1 * t25 * t5 * t109 + 0.12366666666666666667e3 * t150 * t153 - 0.35333333333333333332e2 * t107 * t158 + 0.32977777777777777777e2 * t68 * t161 - 0.14518518518518518519e0 * t37 * t91 - 0.44800000000000000000e3 * t172 * t153 + 0.99555555555555555556e2 * t124 * t158 - 0.66370370370370370369e2 * t78 * t161);
  t181 = my_piecewise3(t12, -0.20733333333333333334e-1 * t135 - 0.23333333333333333333e-2 * t4 * t139 * t13 + 0.11574074074074074075e-2 * t4 * t139, t180);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = rho[0] * t181 + 0.3e1 * t131;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t186 = 0.1e1 / t7 / t151;
  t187 = t6 * t186;
  t200 = t151 * rho[0];
  t204 = 0.1e1 / t7 / t200 * t1 * t3;
  t208 = t2 / t200;
  t213 = t42 / t38 / t151;
  t216 = t4 * t186;
  t221 = M_PI * M_PI;
  t238 = my_piecewise3(t20, 0.37959999999999999999e-1 * t152, -0.14419753086419753087e0 * t25 * t5 * t157 + 0.74200000000000000002e3 * t67 * t171 * t2 * t204 - 0.98933333333333333333e3 * t150 * t208 + 0.15703703703703703703e3 * t107 * t213 - 0.10992592592592592592e3 * t68 * t216 + 0.33876543209876543211e0 * t37 * t139 - 0.14259259259259259259e1 * t67 / t30 * t221 / t87 * t2 * t204 + 0.35840000000000000000e4 * t172 * t208 - 0.44246913580246913580e3 * t124 * t213 + 0.22123456790123456790e3 * t78 * t216);
  t239 = my_piecewise3(t12, 0.62200000000000000002e-1 * t152 + 0.77777777777777777777e-2 * t4 * t187 * t13 - 0.30802469135802469139e-2 * t4 * t187, t238);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = rho[0] * t239 + 0.4e1 * t181;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


GPU_FUNCTION static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t10, t11, t12, t13, t14, t21, t24, t26;
  double t30, t31, t36, t38, t39, t43, t45, t49;
  double t53;

#ifndef XC_DONT_COMPILE_VXC
  double t54, t57, t58, t68, t69, t70, t78, t79;
  double t83, t84;

#ifndef XC_DONT_COMPILE_FXC
  double t87, t88, t91, t92, t102, t105, t106, t107;
  double t108, t110, t111, t114, t124, t125, t131, t132;

#ifndef XC_DONT_COMPILE_KXC
  double t135, t136, t139, t140, t151, t152, t153, t154;
  double t158, t159, t162, t172, t173, t181, t182;

#ifndef XC_DONT_COMPILE_LXC
  double t187, t188, t201, t205, t209, t214, t217, t222;
  double t239, t240;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = rho[0] + rho[1];
  t8 = POW_1_3(t7);
  t10 = t6 / t8;
  t11 = t4 * t10;
  t12 = t11 / 0.4e1;
  t13 = t12 < 0.7e0;
  t14 = log(t12);
  t21 = t12 < 0.10e2;
  t24 = t1 * t1;
  t26 = t24 / t3;
  t30 = sqrt(0.4e1);
  t31 = sqrt(t11);
  t36 = t3 * t3;
  t38 = t1 / t36;
  t39 = t8 * t8;
  t43 = t24 * t36;
  t45 = t5 / t39;
  t49 = 0.1e1 / t31 / t43 / t45 / 0.4e1;
  t53 = my_piecewise3(t21, -0.6156e-1 + 0.1898e-1 * t14, 0.14600000000000000000e0 * t26 * t5 * t8 + 0.53000000000000000000e1 * t30 / t31 / t11 - 0.49000000000000000000e0 * t38 * t6 * t39 - 0.64000000000000000000e1 * t30 * t49);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = my_piecewise3(t13, 0.311e-1 * t14 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t10 * t14 - 0.42500000000000000000e-2 * t11, t53);

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t54 = 0.1e1 / t7;
  t57 = 0.1e1 / t8 / t7;
  t58 = t6 * t57;
  t68 = pow(0.4e1, 0.1e1 / 0.6e1);
  t69 = t68 * t49;
  t70 = t4 * t57;
  t78 = 0.1e1 / t31 / t2 / t54 / 0.48e2;
  t79 = t68 * t78;
  t83 = my_piecewise3(t21, -0.63266666666666666667e-2 * t54, 0.48666666666666666667e-1 * t26 * t45 + 0.10600000000000000000e2 * t69 * t70 - 0.32666666666666666667e0 * t38 * t10 - 0.21333333333333333333e2 * t79 * t70);
  t84 = my_piecewise3(t13, -0.10366666666666666667e-1 * t54 - 0.75000000000000000000e-3 * t4 * t58 * t14 + 0.66666666666666666670e-3 * t4 * t58, t83);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t7 * t84 + (my_piecewise3(t13, 0.311e-1 * t14 - 0.48e-1 + 0.22500000000000000000e-2 * t4 * t10 * t14 - 0.42500000000000000000e-2 * t11, t53));

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t87 = t7 * t7;
  t88 = 0.1e1 / t87;
  t91 = 0.1e1 / t8 / t87;
  t92 = t6 * t91;
  t102 = t5 / t39 / t7;
  t105 = t68 * t68;
  t106 = t105 * t105;
  t107 = t106 * t68;
  t108 = t107 * t78;
  t110 = 0.1e1 / t39 / t87;
  t111 = t43 * t110;
  t114 = t4 * t91;
  t124 = 0.1e1 / t31 / t1 / t3 / t2 / t58 / 0.48e2;
  t125 = t107 * t124;
  t131 = my_piecewise3(t21, 0.63266666666666666667e-2 * t88, -0.32444444444444444445e-1 * t26 * t102 + 0.88333333333333333333e1 * t108 * t111 - 0.14133333333333333333e2 * t69 * t114 + 0.10888888888888888889e0 * t38 * t58 - 0.24888888888888888889e2 * t125 * t111 + 0.28444444444444444444e2 * t79 * t114);
  t132 = my_piecewise3(t13, 0.10366666666666666667e-1 * t88 + 0.10000000000000000000e-2 * t4 * t92 * t14 - 0.63888888888888888893e-3 * t4 * t92, t131);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t7 * t132 + 0.2e1 * t84;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t135 = t87 * t7;
  t136 = 0.1e1 / t135;
  t139 = 0.1e1 / t8 / t135;
  t140 = t6 * t139;
  t151 = t30 * t124;
  t152 = t87 * t87;
  t153 = 0.1e1 / t152;
  t154 = t2 * t153;
  t158 = 0.1e1 / t39 / t135;
  t159 = t43 * t158;
  t162 = t4 * t139;
  t172 = 0.1e1 / t31 / t24 / t36 / t2 / t102 / 0.192e3;
  t173 = t30 * t172;
  t181 = my_piecewise3(t21, -0.12653333333333333333e-1 * t136, 0.54074074074074074075e-1 * t26 * t5 * t110 + 0.12366666666666666667e3 * t151 * t154 - 0.35333333333333333332e2 * t108 * t159 + 0.32977777777777777777e2 * t69 * t162 - 0.14518518518518518519e0 * t38 * t92 - 0.44800000000000000000e3 * t173 * t154 + 0.99555555555555555556e2 * t125 * t159 - 0.66370370370370370369e2 * t79 * t162);
  t182 = my_piecewise3(t13, -0.20733333333333333334e-1 * t136 - 0.23333333333333333333e-2 * t4 * t140 * t14 + 0.11574074074074074075e-2 * t4 * t140, t181);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t7 * t182 + 0.3e1 * t132;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t187 = 0.1e1 / t8 / t152;
  t188 = t6 * t187;
  t201 = t152 * t7;
  t205 = 0.1e1 / t8 / t201 * t1 * t3;
  t209 = t2 / t201;
  t214 = t43 / t39 / t152;
  t217 = t4 * t187;
  t222 = M_PI * M_PI;
  t239 = my_piecewise3(t21, 0.37959999999999999999e-1 * t153, -0.14419753086419753087e0 * t26 * t5 * t158 + 0.74200000000000000002e3 * t68 * t172 * t2 * t205 - 0.98933333333333333333e3 * t151 * t209 + 0.15703703703703703703e3 * t108 * t214 - 0.10992592592592592592e3 * t69 * t217 + 0.33876543209876543211e0 * t38 * t140 - 0.14259259259259259259e1 * t68 / t31 * t222 / t88 * t2 * t205 + 0.35840000000000000000e4 * t173 * t209 - 0.44246913580246913580e3 * t125 * t214 + 0.22123456790123456790e3 * t79 * t217);
  t240 = my_piecewise3(t13, 0.62200000000000000002e-1 * t153 + 0.77777777777777777777e-2 * t4 * t188 * t14 - 0.30802469135802469139e-2 * t4 * t188, t239);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t7 * t240 + 0.4e1 * t182;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = v4rho4[0];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = v4rho4[1];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = v4rho4[2];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = v4rho4[3];

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

