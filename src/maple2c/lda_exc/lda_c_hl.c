/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_hl.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


GPU_FUNCTION static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t5, t6, t7, t8, t11, t12;
  double t13, t14, t15, t16, t17, t18, t23, t24;
  double t26, t27, t28, t30, t31, t35, t36, t39;

#ifndef XC_DONT_COMPILE_VXC
  double t45, t46, t47, t49, t53, t54, t55, t61;
  double t67, t71;

#ifndef XC_DONT_COMPILE_FXC
  double t75, t76, t81, t85, t92, t93, t94, t95;
  double t96, t100, t106, t110;

#ifndef XC_DONT_COMPILE_KXC
  double t114, t115, t120, t126, t131, t140, t143, t147;
  double t151, t155;

#ifndef XC_DONT_COMPILE_LXC
  double t165, t171, t188, t191;
#endif

#endif

#endif

#endif

#endif


  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[0];
  t2 = 0.1e1 / M_PI;
  t5 = params->r[0];
  t6 = t5 * t5;
  t7 = t6 * t5;
  t8 = 0.1e1 / t7;
  t11 = 0.1e1 + 0.3e1 / 0.4e1 * t2 / rho[0] * t8;
  t12 = M_CBRT3;
  t13 = t12 * t12;
  t14 = POW_1_3(t2);
  t15 = 0.1e1 / t14;
  t16 = t13 * t15;
  t17 = M_CBRT4;
  t18 = POW_1_3(rho[0]);
  t23 = 0.1e1 + t16 * t17 * t18 * t5 / 0.3e1;
  t24 = log(t23);
  t26 = t14 * t14;
  t27 = t13 * t26;
  t28 = t18 * t18;
  t30 = t17 / t28;
  t31 = 0.1e1 / t6;
  t35 = t12 * t14;
  t36 = t17 * t17;
  t39 = 0.1e1 / t5;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t1 * (t11 * t24 - t27 * t30 * t31 / 0.4e1 + t35 * t36 / t18 * t39 / 0.8e1 - 0.1e1 / 0.3e1);

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t45 = rho[0] * t1;
  t46 = rho[0] * rho[0];
  t47 = 0.1e1 / t46;
  t49 = t8 * t24;
  t53 = t11 * t13 * t15;
  t54 = 0.1e1 / t23;
  t55 = t5 * t54;
  t61 = t17 / t28 / rho[0];
  t67 = t36 / t18 / rho[0];
  t71 = -0.3e1 / 0.4e1 * t2 * t47 * t49 + t53 * t30 * t55 / 0.9e1 + t27 * t61 * t31 / 0.6e1 - t35 * t67 * t39 / 0.24e2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t45 * t71 + (-t1 * (t11 * t24 - t27 * t30 * t31 / 0.4e1 + t35 * t36 / t18 * t39 / 0.8e1 - 0.1e1 / 0.3e1));

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t75 = t46 * rho[0];
  t76 = 0.1e1 / t75;
  t81 = 0.1e1 / t28 / t46;
  t85 = t16 * t17 * t54;
  t92 = 0.1e1 / t26;
  t93 = t11 * t12 * t92;
  t94 = t23 * t23;
  t95 = 0.1e1 / t94;
  t96 = t6 * t95;
  t100 = t17 * t81;
  t106 = t36 / t18 / t46;
  t110 = 0.3e1 / 0.2e1 * t2 * t76 * t49 - t2 * t81 * t31 * t85 / 0.6e1 - 0.2e1 / 0.27e2 * t53 * t61 * t55 - t93 * t67 * t96 / 0.27e2 - 0.5e1 / 0.18e2 * t27 * t100 * t31 + t35 * t106 * t39 / 0.18e2;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t1 * t71 - t45 * t110;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t114 = t46 * t46;
  t115 = 0.1e1 / t114;
  t120 = 0.1e1 / t28 / t75;
  t126 = 0.1e1 / t18 / t75;
  t131 = t12 * t92 * t36 * t95;
  t140 = t11 * M_PI;
  t143 = 0.1e1 / t94 / t23;
  t147 = t17 * t120;
  t151 = t36 * t126;
  t155 = -0.9e1 / 0.2e1 * t2 * t115 * t49 + 0.2e1 / 0.3e1 * t2 * t120 * t31 * t85 + t2 * t126 * t39 * t131 / 0.12e2 + 0.10e2 / 0.81e2 * t53 * t100 * t55 + 0.2e1 / 0.27e2 * t93 * t106 * t96 + 0.8e1 / 0.81e2 * t140 * t47 * t7 * t143 + 0.20e2 / 0.27e2 * t27 * t147 * t31 - 0.7e1 / 0.54e2 * t35 * t151 * t39;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t1 * t110 - t45 * t155;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t165 = 0.1e1 / t28 / t114;
  t171 = 0.1e1 / t18 / t114;
  t188 = t6 * t6;
  t191 = t94 * t94;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.4e1 * t1 * t155 - t45 * (0.18e2 * t2 / t114 / rho[0] * t49 - 0.82e2 / 0.27e2 * t2 * t165 * t31 * t85 - 0.5e1 / 0.9e1 * t2 * t171 * t39 * t131 - 0.8e1 / 0.27e2 * t115 * t143 - 0.80e2 / 0.243e3 * t53 * t147 * t55 - 0.52e2 / 0.243e3 * t93 * t151 * t96 - 0.32e2 / 0.81e2 * t140 * t76 * t7 * t143 - 0.8e1 / 0.243e3 * t140 * t81 * t188 / t191 * t13 * t15 * t17 - 0.220e3 / 0.81e2 * t27 * t17 * t165 * t31 + 0.35e2 / 0.81e2 * t35 * t36 * t171 * t39);

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
  double t1, t2, t5, t6, t7, t8, t11, t12;
  double t13, t14, t15, t16, t17, t18, t23, t24;
  double t26, t27, t28, t30, t31, t35, t36, t39;

#ifndef XC_DONT_COMPILE_VXC
  double t45, t46, t47, t49, t53, t54, t55, t61;
  double t67, t71;

#ifndef XC_DONT_COMPILE_FXC
  double t75, t76, t81, t85, t92, t93, t94, t95;
  double t96, t100, t106, t110;

#ifndef XC_DONT_COMPILE_KXC
  double t114, t115, t120, t126, t131, t140, t143, t147;
  double t151, t155;

#ifndef XC_DONT_COMPILE_LXC
  double t165, t171, t188, t191;
#endif

#endif

#endif

#endif

#endif


  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[1];
  t2 = 0.1e1 / M_PI;
  t5 = params->r[1];
  t6 = t5 * t5;
  t7 = t6 * t5;
  t8 = 0.1e1 / t7;
  t11 = 0.1e1 + 0.3e1 / 0.4e1 * t2 / rho[0] * t8;
  t12 = M_CBRT3;
  t13 = t12 * t12;
  t14 = POW_1_3(t2);
  t15 = 0.1e1 / t14;
  t16 = t13 * t15;
  t17 = M_CBRT4;
  t18 = POW_1_3(rho[0]);
  t23 = 0.1e1 + t16 * t17 * t18 * t5 / 0.3e1;
  t24 = log(t23);
  t26 = t14 * t14;
  t27 = t13 * t26;
  t28 = t18 * t18;
  t30 = t17 / t28;
  t31 = 0.1e1 / t6;
  t35 = t12 * t14;
  t36 = t17 * t17;
  t39 = 0.1e1 / t5;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t1 * (t11 * t24 - t27 * t30 * t31 / 0.4e1 + t35 * t36 / t18 * t39 / 0.8e1 - 0.1e1 / 0.3e1);

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t45 = rho[0] * t1;
  t46 = rho[0] * rho[0];
  t47 = 0.1e1 / t46;
  t49 = t8 * t24;
  t53 = t11 * t13 * t15;
  t54 = 0.1e1 / t23;
  t55 = t5 * t54;
  t61 = t17 / t28 / rho[0];
  t67 = t36 / t18 / rho[0];
  t71 = -0.3e1 / 0.4e1 * t2 * t47 * t49 + t53 * t30 * t55 / 0.9e1 + t27 * t61 * t31 / 0.6e1 - t35 * t67 * t39 / 0.24e2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t45 * t71 + (-t1 * (t11 * t24 - t27 * t30 * t31 / 0.4e1 + t35 * t36 / t18 * t39 / 0.8e1 - 0.1e1 / 0.3e1));

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t75 = t46 * rho[0];
  t76 = 0.1e1 / t75;
  t81 = 0.1e1 / t28 / t46;
  t85 = t16 * t17 * t54;
  t92 = 0.1e1 / t26;
  t93 = t11 * t12 * t92;
  t94 = t23 * t23;
  t95 = 0.1e1 / t94;
  t96 = t6 * t95;
  t100 = t17 * t81;
  t106 = t36 / t18 / t46;
  t110 = 0.3e1 / 0.2e1 * t2 * t76 * t49 - t2 * t81 * t31 * t85 / 0.6e1 - 0.2e1 / 0.27e2 * t53 * t61 * t55 - t93 * t67 * t96 / 0.27e2 - 0.5e1 / 0.18e2 * t27 * t100 * t31 + t35 * t106 * t39 / 0.18e2;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t1 * t71 - t45 * t110;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t114 = t46 * t46;
  t115 = 0.1e1 / t114;
  t120 = 0.1e1 / t28 / t75;
  t126 = 0.1e1 / t18 / t75;
  t131 = t12 * t92 * t36 * t95;
  t140 = t11 * M_PI;
  t143 = 0.1e1 / t94 / t23;
  t147 = t17 * t120;
  t151 = t36 * t126;
  t155 = -0.9e1 / 0.2e1 * t2 * t115 * t49 + 0.2e1 / 0.3e1 * t2 * t120 * t31 * t85 + t2 * t126 * t39 * t131 / 0.12e2 + 0.10e2 / 0.81e2 * t53 * t100 * t55 + 0.2e1 / 0.27e2 * t93 * t106 * t96 + 0.8e1 / 0.81e2 * t140 * t47 * t7 * t143 + 0.20e2 / 0.27e2 * t27 * t147 * t31 - 0.7e1 / 0.54e2 * t35 * t151 * t39;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t1 * t110 - t45 * t155;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t165 = 0.1e1 / t28 / t114;
  t171 = 0.1e1 / t18 / t114;
  t188 = t6 * t6;
  t191 = t94 * t94;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.4e1 * t1 * t155 - t45 * (0.18e2 * t2 / t114 / rho[0] * t49 - 0.82e2 / 0.27e2 * t2 * t165 * t31 * t85 - 0.5e1 / 0.9e1 * t2 * t171 * t39 * t131 - 0.8e1 / 0.27e2 * t115 * t143 - 0.80e2 / 0.243e3 * t53 * t147 * t55 - 0.52e2 / 0.243e3 * t93 * t151 * t96 - 0.32e2 / 0.81e2 * t140 * t76 * t7 * t143 - 0.8e1 / 0.243e3 * t140 * t81 * t188 / t191 * t13 * t15 * t17 - 0.220e3 / 0.81e2 * t27 * t17 * t165 * t31 + 0.35e2 / 0.81e2 * t35 * t36 * t171 * t39);

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
  double t9, t12, t13, t14, t15, t16, t17, t18;
  double t19, t20, t24, t25, t27, t28, t29, t31;
  double t32, t36, t37, t39, t40, t45, t46, t47;
  double t48, t49, t51, t52, t55, t58, t59, t60;
  double t61, t62, t63, t64, t67, t71, t72, t74;
  double t78, t84, t85;

#ifndef XC_DONT_COMPILE_VXC
  double t86, t87, t88, t89, t93, t94, t95, t101;
  double t107, t112, t113, t114, t116, t120, t121, t122;
  double t126, t127, t128, t140, t141, t144, t146, t150;
  double t151;

#ifndef XC_DONT_COMPILE_FXC
  double t154, t156, t157, t158, t159, t163, t164, t167;
  double t174, t175, t176, t177, t178, t182, t188, t193;
  double t194, t195, t196, t199, t201, t204, t205, t206;
  double t209, t213, t214, t215, t216, t221, t228, t229;
  double t230, t231, t243, t244, t247, t250, t253, t256;
  double t260, t261, t262, t266, t270, t273, t276, t280;
  double t281, t282;

#ifndef XC_DONT_COMPILE_KXC
  double t285, t288, t289, t290, t291, t295, t296, t301;
  double t302, t304, t306, t315, t318, t322, t326, t331;
  double t333, t334, t337, t340, t342, t346, t347, t350;
  double t353, t357, t358, t359, t361, t362, t370, t379;
  double t382, t394, t395, t399, t400, t403, t413, t416;
  double t427, t428, t429, t430, t431, t436, t441, t446;
  double t449, t454, t457, t461, t462, t463, t469, t475;
  double t478, t483, t487, t488, t490;

#ifndef XC_DONT_COMPILE_LXC
  double t493, t497, t499, t500, t504, t505, t510, t511;
  double t527, t530, t533, t537, t541, t546, t547, t549;
  double t550, t556, t561, t563, t566, t568, t569, t575;
  double t586, t588, t590, t612, t615, t630, t636, t660;
  double t678, t687, t690, t692, t693, t694, t715, t718;
  double t757, t760, t762, t790, t812, t815, t824, t829;
  double t835, t838, t843;
#endif

#endif

#endif

#endif

#endif


  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[0];
  t2 = 0.1e1 / M_PI;
  t3 = rho[0] + rho[1];
  t4 = 0.1e1 / t3;
  t5 = t2 * t4;
  t6 = params->r[0];
  t7 = t6 * t6;
  t8 = t7 * t6;
  t9 = 0.1e1 / t8;
  t12 = 0.1e1 + 0.3e1 / 0.4e1 * t5 * t9;
  t13 = M_CBRT3;
  t14 = t13 * t13;
  t15 = POW_1_3(t2);
  t16 = 0.1e1 / t15;
  t17 = t14 * t16;
  t18 = M_CBRT4;
  t19 = POW_1_3(t3);
  t20 = t18 * t19;
  t24 = 0.1e1 + t17 * t20 * t6 / 0.3e1;
  t25 = log(t24);
  t27 = t15 * t15;
  t28 = t14 * t27;
  t29 = t19 * t19;
  t31 = t18 / t29;
  t32 = 0.1e1 / t7;
  t36 = t13 * t15;
  t37 = t18 * t18;
  t39 = t37 / t19;
  t40 = 0.1e1 / t6;
  t45 = t1 * (t12 * t25 - t28 * t31 * t32 / 0.4e1 + t36 * t39 * t40 / 0.8e1 - 0.1e1 / 0.3e1);
  t46 = rho[0] - rho[1];
  t47 = t46 * t4;
  t48 = 0.1e1 + t47;
  t49 = POW_1_3(t48);
  t51 = 0.1e1 - t47;
  t52 = POW_1_3(t51);
  t55 = M_CBRT2;
  t58 = 0.1e1 / (0.2e1 * t55 - 0.2e1);
  t59 = (t49 * t48 + t52 * t51 - 0.2e1) * t58;
  t60 = params->c[1];
  t61 = params->r[1];
  t62 = t61 * t61;
  t63 = t62 * t61;
  t64 = 0.1e1 / t63;
  t67 = 0.1e1 + 0.3e1 / 0.4e1 * t5 * t64;
  t71 = 0.1e1 + t17 * t20 * t61 / 0.3e1;
  t72 = log(t71);
  t74 = 0.1e1 / t62;
  t78 = 0.1e1 / t61;
  t84 = -t60 * (t67 * t72 - t28 * t31 * t74 / 0.4e1 + t36 * t39 * t78 / 0.8e1 - 0.1e1 / 0.3e1) + t45;
  t85 = t59 * t84;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t45 + t85;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t86 = t3 * t3;
  t87 = 0.1e1 / t86;
  t88 = t2 * t87;
  t89 = t9 * t25;
  t93 = t12 * t14 * t16;
  t94 = 0.1e1 / t24;
  t95 = t6 * t94;
  t101 = t18 / t29 / t3;
  t107 = t37 / t19 / t3;
  t112 = t1 * (-0.3e1 / 0.4e1 * t88 * t89 + t93 * t31 * t95 / 0.9e1 + t28 * t101 * t32 / 0.6e1 - t36 * t107 * t40 / 0.24e2);
  t113 = t46 * t87;
  t114 = t4 - t113;
  t116 = -t114;
  t120 = (0.4e1 / 0.3e1 * t49 * t114 + 0.4e1 / 0.3e1 * t52 * t116) * t58;
  t121 = t120 * t84;
  t122 = t64 * t72;
  t126 = t67 * t14 * t16;
  t127 = 0.1e1 / t71;
  t128 = t61 * t127;
  t140 = -t60 * (-0.3e1 / 0.4e1 * t88 * t122 + t126 * t31 * t128 / 0.9e1 + t28 * t101 * t74 / 0.6e1 - t36 * t107 * t78 / 0.24e2) + t112;
  t141 = t59 * t140;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t45 + t85 + t3 * (-t112 + t121 + t141);

  t144 = -t4 - t113;
  t146 = -t144;
  t150 = (0.4e1 / 0.3e1 * t49 * t144 + 0.4e1 / 0.3e1 * t52 * t146) * t58;
  t151 = t150 * t84;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t45 + t85 + t3 * (-t112 + t151 + t141);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t154 = 0.2e1 * t112;
  t156 = 0.2e1 * t141;
  t157 = t86 * t3;
  t158 = 0.1e1 / t157;
  t159 = t2 * t158;
  t163 = 0.1e1 / t29 / t86;
  t164 = t2 * t163;
  t167 = t17 * t18 * t94;
  t174 = 0.1e1 / t27;
  t175 = t12 * t13 * t174;
  t176 = t24 * t24;
  t177 = 0.1e1 / t176;
  t178 = t7 * t177;
  t182 = t18 * t163;
  t188 = t37 / t19 / t86;
  t193 = t1 * (0.3e1 / 0.2e1 * t159 * t89 - t164 * t32 * t167 / 0.6e1 - 0.2e1 / 0.27e2 * t93 * t101 * t95 - t175 * t107 * t178 / 0.27e2 - 0.5e1 / 0.18e2 * t28 * t182 * t32 + t36 * t188 * t40 / 0.18e2);
  t194 = t49 * t49;
  t195 = 0.1e1 / t194;
  t196 = t114 * t114;
  t199 = t46 * t158;
  t201 = -0.2e1 * t87 + 0.2e1 * t199;
  t204 = t52 * t52;
  t205 = 0.1e1 / t204;
  t206 = t116 * t116;
  t209 = -t201;
  t213 = (0.4e1 / 0.9e1 * t195 * t196 + 0.4e1 / 0.3e1 * t49 * t201 + 0.4e1 / 0.9e1 * t205 * t206 + 0.4e1 / 0.3e1 * t52 * t209) * t58;
  t214 = t213 * t84;
  t215 = t120 * t140;
  t216 = 0.2e1 * t215;
  t221 = t17 * t18 * t127;
  t228 = t67 * t13 * t174;
  t229 = t71 * t71;
  t230 = 0.1e1 / t229;
  t231 = t62 * t230;
  t243 = -t60 * (0.3e1 / 0.2e1 * t159 * t122 - t164 * t74 * t221 / 0.6e1 - 0.2e1 / 0.27e2 * t126 * t101 * t128 - t228 * t107 * t231 / 0.27e2 - 0.5e1 / 0.18e2 * t28 * t182 * t74 + t36 * t188 * t78 / 0.18e2) + t193;
  t244 = t59 * t243;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t154 + 0.2e1 * t121 + t156 + t3 * (-t193 + t214 + t216 + t244);

  t247 = t195 * t144;
  t250 = t49 * t46;
  t253 = t205 * t146;
  t256 = t52 * t46;
  t260 = (0.4e1 / 0.9e1 * t247 * t114 + 0.8e1 / 0.3e1 * t250 * t158 + 0.4e1 / 0.9e1 * t253 * t116 - 0.8e1 / 0.3e1 * t256 * t158) * t58;
  t261 = t260 * t84;
  t262 = t150 * t140;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -t154 + t121 + t156 + t151 + t3 * (-t193 + t261 + t262 + t215 + t244);

  t266 = t144 * t144;
  t270 = 0.2e1 * t87 + 0.2e1 * t199;
  t273 = t146 * t146;
  t276 = -t270;
  t280 = (0.4e1 / 0.9e1 * t195 * t266 + 0.4e1 / 0.3e1 * t49 * t270 + 0.4e1 / 0.9e1 * t205 * t273 + 0.4e1 / 0.3e1 * t52 * t276) * t58;
  t281 = t280 * t84;
  t282 = 0.2e1 * t262;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t154 + 0.2e1 * t151 + t156 + t3 * (-t193 + t281 + t282 + t244);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t285 = 0.3e1 * t193;
  t288 = 0.3e1 * t244;
  t289 = t86 * t86;
  t290 = 0.1e1 / t289;
  t291 = t2 * t290;
  t295 = 0.1e1 / t29 / t157;
  t296 = t2 * t295;
  t301 = 0.1e1 / t19 / t157;
  t302 = t2 * t301;
  t304 = t13 * t174;
  t306 = t304 * t37 * t177;
  t315 = t12 * M_PI;
  t318 = 0.1e1 / t176 / t24;
  t322 = t18 * t295;
  t326 = t37 * t301;
  t331 = t1 * (-0.9e1 / 0.2e1 * t291 * t89 + 0.2e1 / 0.3e1 * t296 * t32 * t167 + t302 * t40 * t306 / 0.12e2 + 0.10e2 / 0.81e2 * t93 * t182 * t95 + 0.2e1 / 0.27e2 * t175 * t188 * t178 + 0.8e1 / 0.81e2 * t315 * t87 * t8 * t318 + 0.20e2 / 0.27e2 * t28 * t322 * t32 - 0.7e1 / 0.54e2 * t36 * t326 * t40);
  t333 = 0.1e1 / t194 / t48;
  t334 = t196 * t114;
  t337 = t195 * t114;
  t340 = t46 * t290;
  t342 = 0.6e1 * t158 - 0.6e1 * t340;
  t346 = 0.1e1 / t204 / t51;
  t347 = t206 * t116;
  t350 = t205 * t116;
  t353 = -t342;
  t357 = (-0.8e1 / 0.27e2 * t333 * t334 + 0.4e1 / 0.3e1 * t337 * t201 + 0.4e1 / 0.3e1 * t49 * t342 - 0.8e1 / 0.27e2 * t346 * t347 + 0.4e1 / 0.3e1 * t350 * t209 + 0.4e1 / 0.3e1 * t52 * t353) * t58;
  t358 = t357 * t84;
  t359 = t213 * t140;
  t361 = t120 * t243;
  t362 = 0.3e1 * t361;
  t370 = t304 * t37 * t230;
  t379 = t67 * M_PI;
  t382 = 0.1e1 / t229 / t71;
  t394 = -t60 * (-0.9e1 / 0.2e1 * t291 * t122 + 0.2e1 / 0.3e1 * t296 * t74 * t221 + t302 * t78 * t370 / 0.12e2 + 0.10e2 / 0.81e2 * t126 * t182 * t128 + 0.2e1 / 0.27e2 * t228 * t188 * t231 + 0.8e1 / 0.81e2 * t379 * t87 * t63 * t382 + 0.20e2 / 0.27e2 * t28 * t322 * t74 - 0.7e1 / 0.54e2 * t36 * t326 * t78) + t331;
  t395 = t59 * t394;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t285 + 0.3e1 * t214 + 0.6e1 * t215 + t288 + t3 * (-t331 + t358 + 0.3e1 * t359 + t362 + t395);

  t399 = 0.2e1 * t261;
  t400 = t333 * t144;
  t403 = t195 * t46;
  t413 = t346 * t146;
  t416 = t205 * t46;
  t427 = (-0.8e1 / 0.27e2 * t400 * t196 + 0.16e2 / 0.9e1 * t403 * t158 * t114 + 0.4e1 / 0.9e1 * t247 * t201 + 0.8e1 / 0.3e1 * t49 * t158 - 0.8e1 * t250 * t290 - 0.8e1 / 0.27e2 * t413 * t206 - 0.16e2 / 0.9e1 * t416 * t158 * t116 + 0.4e1 / 0.9e1 * t253 * t209 - 0.8e1 / 0.3e1 * t52 * t158 + 0.8e1 * t256 * t290) * t58;
  t428 = t427 * t84;
  t429 = t260 * t140;
  t430 = 0.2e1 * t429;
  t431 = t150 * t243;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t285 + t214 + 0.4e1 * t215 + t288 + t399 + t282 + t3 * (-t331 + t428 + t430 + t431 + t359 + 0.2e1 * t361 + t395);

  t436 = t333 * t266;
  t441 = t195 * t270;
  t446 = -0.2e1 * t158 - 0.6e1 * t340;
  t449 = t346 * t273;
  t454 = t205 * t276;
  t457 = -t446;
  t461 = (-0.8e1 / 0.27e2 * t436 * t114 + 0.16e2 / 0.9e1 * t247 * t199 + 0.4e1 / 0.9e1 * t441 * t114 + 0.4e1 / 0.3e1 * t49 * t446 - 0.8e1 / 0.27e2 * t449 * t116 - 0.16e2 / 0.9e1 * t253 * t199 + 0.4e1 / 0.9e1 * t454 * t116 + 0.4e1 / 0.3e1 * t52 * t457) * t58;
  t462 = t461 * t84;
  t463 = t280 * t140;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t285 + t399 + 0.4e1 * t262 + t216 + t288 + t281 + t3 * (-t331 + t462 + t463 + t430 + 0.2e1 * t431 + t361 + t395);

  t469 = t266 * t144;
  t475 = -0.6e1 * t158 - 0.6e1 * t340;
  t478 = t273 * t146;
  t483 = -t475;
  t487 = (-0.8e1 / 0.27e2 * t333 * t469 + 0.4e1 / 0.3e1 * t247 * t270 + 0.4e1 / 0.3e1 * t49 * t475 - 0.8e1 / 0.27e2 * t346 * t478 + 0.4e1 / 0.3e1 * t253 * t276 + 0.4e1 / 0.3e1 * t52 * t483) * t58;
  t488 = t487 * t84;
  t490 = 0.3e1 * t431;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t285 + 0.3e1 * t281 + 0.6e1 * t262 + t288 + t3 * (-t331 + t488 + 0.3e1 * t463 + t490 + t395);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t493 = 0.4e1 * t331;
  t497 = 0.4e1 * t395;
  t499 = 0.1e1 / t289 / t3;
  t500 = t2 * t499;
  t504 = 0.1e1 / t29 / t289;
  t505 = t2 * t504;
  t510 = 0.1e1 / t19 / t289;
  t511 = t2 * t510;
  t527 = t7 * t7;
  t530 = t176 * t176;
  t533 = t16 * t18;
  t537 = t18 * t504;
  t541 = t37 * t510;
  t546 = t1 * (0.18e2 * t500 * t89 - 0.82e2 / 0.27e2 * t505 * t32 * t167 - 0.5e1 / 0.9e1 * t511 * t40 * t306 - 0.8e1 / 0.27e2 * t290 * t318 - 0.80e2 / 0.243e3 * t93 * t322 * t95 - 0.52e2 / 0.243e3 * t175 * t326 * t178 - 0.32e2 / 0.81e2 * t315 * t158 * t8 * t318 - 0.8e1 / 0.243e3 * t315 * t163 * t527 / t530 * t14 * t533 - 0.220e3 / 0.81e2 * t28 * t537 * t32 + 0.35e2 / 0.81e2 * t36 * t541 * t40);
  t547 = t48 * t48;
  t549 = 0.1e1 / t194 / t547;
  t550 = t196 * t196;
  t556 = t201 * t201;
  t561 = t46 * t499;
  t563 = -0.24e2 * t290 + 0.24e2 * t561;
  t566 = t51 * t51;
  t568 = 0.1e1 / t204 / t566;
  t569 = t206 * t206;
  t575 = t209 * t209;
  t586 = t357 * t140;
  t588 = t213 * t243;
  t590 = t120 * t394;
  t612 = t62 * t62;
  t615 = t229 * t229;
  t630 = t59 * (-t60 * (0.18e2 * t500 * t122 - 0.82e2 / 0.27e2 * t505 * t74 * t221 - 0.5e1 / 0.9e1 * t511 * t78 * t370 - 0.8e1 / 0.27e2 * t290 * t382 - 0.80e2 / 0.243e3 * t126 * t322 * t128 - 0.52e2 / 0.243e3 * t228 * t326 * t231 - 0.32e2 / 0.81e2 * t379 * t158 * t63 * t382 - 0.8e1 / 0.243e3 * t379 * t163 * t612 / t615 * t14 * t533 - 0.220e3 / 0.81e2 * t28 * t537 * t74 + 0.35e2 / 0.81e2 * t36 * t541 * t78) + t546);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -t493 + 0.4e1 * t358 + 0.12e2 * t359 + 0.12e2 * t361 + t497 + t3 * (-t546 + (0.40e2 / 0.81e2 * t549 * t550 - 0.16e2 / 0.9e1 * t333 * t196 * t201 + 0.4e1 / 0.3e1 * t195 * t556 + 0.16e2 / 0.9e1 * t337 * t342 + 0.4e1 / 0.3e1 * t49 * t563 + 0.40e2 / 0.81e2 * t568 * t569 - 0.16e2 / 0.9e1 * t346 * t206 * t209 + 0.4e1 / 0.3e1 * t205 * t575 + 0.16e2 / 0.9e1 * t350 * t353 - 0.4e1 / 0.3e1 * t52 * t563) * t58 * t84 + 0.4e1 * t586 + 0.6e1 * t588 + 0.4e1 * t590 + t630);

  t636 = 0.6e1 * t429;
  t660 = 0.32e2 * t250 * t499;
  t678 = 0.32e2 * t256 * t499;
  t687 = -0.8e1 * t403 * t290 * t114 + 0.8e1 * t416 * t290 * t116 + 0.40e2 / 0.81e2 * t549 * t144 * t334 - 0.8e1 / 0.9e1 * t400 * t114 * t201 - 0.16e2 / 0.9e1 * t333 * t46 * t158 * t196 + 0.8e1 / 0.3e1 * t195 * t158 * t114 + 0.8e1 / 0.3e1 * t403 * t158 * t201 + t660 + 0.40e2 / 0.81e2 * t568 * t146 * t347 - 0.8e1 / 0.9e1 * t413 * t116 * t209 + 0.16e2 / 0.9e1 * t346 * t46 * t158 * t206 - 0.8e1 / 0.3e1 * t205 * t158 * t116 - 0.8e1 / 0.3e1 * t416 * t158 * t209 - t678 + 0.4e1 / 0.9e1 * t247 * t342 - 0.16e2 * t49 * t290 + 0.4e1 / 0.9e1 * t253 * t353 + 0.16e2 * t52 * t290;
  t690 = t427 * t140;
  t692 = t260 * t243;
  t693 = 0.3e1 * t692;
  t694 = t150 * t394;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -t493 + t358 + 0.6e1 * t359 + 0.9e1 * t361 + t497 + 0.3e1 * t428 + t636 + t490 + t3 * (t687 * t58 * t84 - t546 + t586 + 0.3e1 * t588 + 0.3e1 * t590 + t630 + 0.3e1 * t690 + t693 + t694);

  t715 = t46 * t46;
  t718 = 0.1e1 / t289 / t86;
  t757 = 0.40e2 / 0.81e2 * t549 * t266 * t196 - 0.64e2 / 0.27e2 * t400 * t114 * t46 * t158 - 0.8e1 / 0.27e2 * t436 * t201 + 0.32e2 / 0.9e1 * t195 * t715 * t718 + 0.16e2 / 0.9e1 * t247 * t158 - 0.16e2 / 0.3e1 * t247 * t340 - 0.8e1 / 0.27e2 * t333 * t270 * t196 + 0.8e1 / 0.9e1 * t195 * t446 * t114 + 0.4e1 / 0.9e1 * t441 * t201 + t660 + 0.40e2 / 0.81e2 * t568 * t273 * t206 + 0.64e2 / 0.27e2 * t413 * t116 * t46 * t158 - 0.8e1 / 0.27e2 * t449 * t209 + 0.32e2 / 0.9e1 * t205 * t715 * t718 - 0.16e2 / 0.9e1 * t253 * t158 + 0.16e2 / 0.3e1 * t253 * t340 - 0.8e1 / 0.27e2 * t346 * t276 * t206 + 0.8e1 / 0.9e1 * t205 * t457 * t116 + 0.4e1 / 0.9e1 * t454 * t209 - t678;
  t760 = t461 * t140;
  t762 = t280 * t243;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -t493 + 0.2e1 * t428 + 0.8e1 * t429 + 0.6e1 * t431 + 0.2e1 * t359 + 0.6e1 * t361 + t497 + 0.2e1 * t462 + 0.2e1 * t463 + t3 * (t757 * t58 * t84 - t546 + t588 + 0.2e1 * t590 + t630 + 0.2e1 * t690 + 0.4e1 * t692 + 0.2e1 * t694 + 0.2e1 * t760 + t762);

  t790 = 0.12e2 * t290 + 0.24e2 * t561;
  t812 = 0.40e2 / 0.81e2 * t549 * t469 * t114 - 0.16e2 / 0.9e1 * t436 * t199 - 0.8e1 / 0.9e1 * t400 * t270 * t114 + 0.8e1 / 0.3e1 * t403 * t158 * t270 + 0.4e1 / 0.3e1 * t247 * t446 + 0.4e1 / 0.9e1 * t195 * t475 * t114 + 0.4e1 / 0.3e1 * t49 * t790 + 0.40e2 / 0.81e2 * t568 * t478 * t116 + 0.16e2 / 0.9e1 * t449 * t199 - 0.8e1 / 0.9e1 * t413 * t276 * t116 - 0.8e1 / 0.3e1 * t416 * t158 * t276 + 0.4e1 / 0.3e1 * t253 * t457 + 0.4e1 / 0.9e1 * t205 * t483 * t116 - 0.4e1 / 0.3e1 * t52 * t790;
  t815 = t487 * t140;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = -t493 + 0.3e1 * t462 + 0.6e1 * t463 + t636 + 0.9e1 * t431 + t362 + t497 + t488 + t3 * (t812 * t58 * t84 - t546 + t590 + t630 + t693 + 0.3e1 * t694 + 0.3e1 * t760 + 0.3e1 * t762 + t815);

  t824 = t266 * t266;
  t829 = t270 * t270;
  t835 = 0.24e2 * t290 + 0.24e2 * t561;
  t838 = t273 * t273;
  t843 = t276 * t276;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = -t493 + 0.4e1 * t488 + 0.12e2 * t463 + 0.12e2 * t431 + t497 + t3 * (-t546 + (0.40e2 / 0.81e2 * t549 * t824 - 0.16e2 / 0.9e1 * t436 * t270 + 0.4e1 / 0.3e1 * t195 * t829 + 0.16e2 / 0.9e1 * t247 * t475 + 0.4e1 / 0.3e1 * t49 * t835 + 0.40e2 / 0.81e2 * t568 * t838 - 0.16e2 / 0.9e1 * t449 * t276 + 0.4e1 / 0.3e1 * t205 * t843 + 0.16e2 / 0.9e1 * t253 * t483 - 0.4e1 / 0.3e1 * t52 * t835) * t58 * t84 + 0.4e1 * t815 + 0.6e1 * t762 + 0.4e1 * t694 + t630);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

