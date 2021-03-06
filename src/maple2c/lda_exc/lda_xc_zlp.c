/*
  This file was generated automatically with scripts/maple2c.py.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_xc_zlp.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t4, t5, t8, t9;

#ifndef XC_DONT_COMPILE_VXC
  double t12, t14, t17, t18, t21;

#ifndef XC_DONT_COMPILE_FXC
  double t28, t34, t35, t39, t42;

#ifndef XC_DONT_COMPILE_KXC
  double t51, t60, t62, t66, t69;

#ifndef XC_DONT_COMPILE_LXC
  double t80, t94;
#endif

#endif

#endif

#endif

#endif



  t1 = POW_1_3(rho[0]);
  t4 = 0.1e1 + 0.10555627099250339363e3 / t1;
  t5 = log(t4);
  t8 = 0.1e1 - 0.94736200000000000000e-2 * t5 * t1;
  t9 = t8 * t1;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.93222000000000000000e0 * t9;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t12 = t1 * rho[0];
  t14 = 0.1e1 / t4;
  t17 = t1 * t1;
  t18 = 0.1e1 / t17;
  t21 = 0.33333333333333333332e0 / rho[0] * t14 - 0.31578733333333333333e-2 * t5 * t18;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.12429600000000000000e1 * t9 - 0.93222000000000000000e0 * t12 * t21;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t28 = rho[0] * rho[0];
  t34 = t4 * t4;
  t35 = 0.1e1 / t34;
  t39 = 0.1e1 / t17 / rho[0];
  t42 = -0.22222222222222222221e0 / t28 * t14 + 0.11728474554722599292e2 / t1 / t28 * t35 + 0.21052488888888888889e-2 * t5 * t39;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.24859200000000000000e1 * t21 * t1 - 0.41432000000000000000e0 * t8 * t18 - 0.93222000000000000000e0 * t12 * t42;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t51 = t28 * rho[0];
  t60 = 0.1e1 / t17 / t51;
  t62 = 0.1e1 / t34 / t4;
  t66 = 0.1e1 / t17 / t28;
  t69 = 0.37037037037037037035e0 / t51 * t14 - 0.35185423664167797876e2 / t1 / t51 * t35 + 0.82534269228465284243e3 * t60 * t62 - 0.35087481481481481482e-2 * t5 * t66;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.37288800000000000000e1 * t42 * t1 - 0.12429600000000000000e1 * t21 * t18 + 0.27621333333333333333e0 * t8 * t39 - 0.93222000000000000000e0 * t12 * t69;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t80 = t28 * t28;
  t94 = t34 * t34;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.49718400000000000000e1 * t69 * t1 - 0.24859200000000000000e1 * t42 * t18 + 0.11048533333333333333e1 * t21 * t39 - 0.46035555555555555555e0 * t8 * t66 - 0.93222000000000000000e0 * t12 * (-0.98765432098765432088e0 / t80 * t14 + 0.13031638394136221436e3 / t1 / t80 * t35 - 0.55022846152310189495e4 / t17 / t80 * t62 + 0.87120096888481155292e5 / t80 / rho[0] / t94 + 0.93566617283950617285e-2 * t5 * t60);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t5, t6, t9, t10;

#ifndef XC_DONT_COMPILE_VXC
  double t13, t15, t18, t19, t22;

#ifndef XC_DONT_COMPILE_FXC
  double t29, t35, t36, t40, t43;

#ifndef XC_DONT_COMPILE_KXC
  double t52, t61, t63, t67, t70;

#ifndef XC_DONT_COMPILE_LXC
  double t81, t95;
#endif

#endif

#endif

#endif

#endif



  t1 = rho[0] + rho[1];
  t2 = POW_1_3(t1);
  t5 = 0.1e1 + 0.10555627099250339363e3 / t2;
  t6 = log(t5);
  t9 = 0.1e1 - 0.94736200000000000000e-2 * t6 * t2;
  t10 = t9 * t2;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.93222000000000000000e0 * t10;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t13 = t2 * t1;
  t15 = 0.1e1 / t5;
  t18 = t2 * t2;
  t19 = 0.1e1 / t18;
  t22 = 0.33333333333333333332e0 / t1 * t15 - 0.31578733333333333333e-2 * t6 * t19;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.12429600000000000000e1 * t10 - 0.93222000000000000000e0 * t13 * t22;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t29 = t1 * t1;
  t35 = t5 * t5;
  t36 = 0.1e1 / t35;
  t40 = 0.1e1 / t18 / t1;
  t43 = -0.22222222222222222221e0 / t29 * t15 + 0.11728474554722599292e2 / t2 / t29 * t36 + 0.21052488888888888889e-2 * t6 * t40;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.24859200000000000000e1 * t22 * t2 - 0.41432000000000000000e0 * t9 * t19 - 0.93222000000000000000e0 * t13 * t43;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t52 = t29 * t1;
  t61 = 0.1e1 / t18 / t52;
  t63 = 0.1e1 / t35 / t5;
  t67 = 0.1e1 / t18 / t29;
  t70 = 0.37037037037037037035e0 / t52 * t15 - 0.35185423664167797876e2 / t2 / t52 * t36 + 0.82534269228465284243e3 * t61 * t63 - 0.35087481481481481482e-2 * t6 * t67;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.37288800000000000000e1 * t43 * t2 - 0.12429600000000000000e1 * t22 * t19 + 0.27621333333333333333e0 * t9 * t40 - 0.93222000000000000000e0 * t13 * t70;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t81 = t29 * t29;
  t95 = t35 * t35;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.49718400000000000000e1 * t70 * t2 - 0.24859200000000000000e1 * t43 * t19 + 0.11048533333333333333e1 * t22 * t40 - 0.46035555555555555555e0 * t9 * t67 - 0.93222000000000000000e0 * t13 * (-0.98765432098765432088e0 / t81 * t15 + 0.13031638394136221436e3 / t2 / t81 * t36 - 0.55022846152310189495e4 / t18 / t81 * t63 + 0.87120096888481155292e5 / t81 / t1 / t95 + 0.93566617283950617285e-2 * t6 * t61);

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

