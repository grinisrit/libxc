/*
  This file was generated automatically with scripts/maple2c.py.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_k_tf.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t2, t3, t5, t7, t8, t10, t11, t13;
  double t14, t15, t16, t17, t19;

#ifndef XC_DONT_COMPILE_LXC
  double t28;
#endif

#endif


  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t2 = POW_1_3(p->zeta_threshold);
  t3 = t2 * t2;
  t5 = my_piecewise3(0.1e1 <= p->zeta_threshold, t3 * p->zeta_threshold, 1);
  t7 = M_CBRT3;
  t8 = params->ax * t5 * t7;
  t10 = POW_1_3(0.1e1 / M_PI);
  t11 = t10 * t10;
  t13 = M_CBRT4;
  t14 = t13 * t13;
  t15 = 0.1e1 / t11 * t14;
  t16 = POW_1_3(rho[0]);
  t17 = t16 * t16;
  t19 = t8 * t15 * t17;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t19 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.5e1 / 0.9e1 * t19;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.10e2 / 0.27e2 * t8 * t15 / t16;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.10e2 / 0.81e2 * t8 * t15 / t16 / rho[0];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t28 = rho[0] * rho[0];
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.40e2 / 0.243e3 * t8 * t15 / t16 / t28;

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
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t13, t14, t15, t16, t17;
  double t19, t23, t24, t26, t27, t28, t29, t30;
  double t31, t32, t33, t34, t35;

#ifndef XC_DONT_COMPILE_VXC
  double t36, t38, t39, t40, t41, t42, t45, t46;
  double t49, t51, t54, t57, t60, t61, t64, t66;

#ifndef XC_DONT_COMPILE_FXC
  double t71, t72, t74, t75, t77, t78, t79, t83;
  double t84, t86, t90, t91, t92, t95, t99, t101;
  double t106, t108, t110, t113, t117, t118, t121, t125;
  double t127, t132, t136, t140, t141, t144, t148, t150;

#ifndef XC_DONT_COMPILE_KXC
  double t155, t156, t158, t161, t162, t164, t166, t167;
  double t170, t173, t174, t175, t177, t181, t183, t184;
  double t187, t190, t194, t196, t202, t204, t208, t209;
  double t212, t223, t224, t227, t238, t240, t247, t249;
  double t254, t259, t263, t264, t269, t272, t276, t278;
  double t284, t290, t294, t295, t300, t304, t306;

#ifndef XC_DONT_COMPILE_LXC
  double t312, t314, t316, t322, t323, t325, t326, t332;
  double t338, t339, t341, t345, t346, t348, t349, t355;
  double t364, t375, t378, t379, t381, t407, t409, t434;
  double t436, t448, t451, t462, t465, t481, t507, t518;
  double t538, t542, t563, t572, t577, t583, t587, t588;
  double t593, t602;
#endif

#endif

#endif

#endif

#endif


  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = t5 <= p->zeta_threshold;
  t7 = POW_1_3(p->zeta_threshold);
  t8 = t7 * t7;
  t9 = t8 * p->zeta_threshold;
  t10 = POW_1_3(t5);
  t11 = t10 * t10;
  t13 = my_piecewise3(t6, t9, t11 * t5);
  t14 = 0.1e1 - t4;
  t15 = t14 <= p->zeta_threshold;
  t16 = POW_1_3(t14);
  t17 = t16 * t16;
  t19 = my_piecewise3(t15, t9, t17 * t14);
  t23 = M_CBRT3;
  t24 = params->ax * (t13 / 0.2e1 + t19 / 0.2e1) * t23;
  t26 = POW_1_3(0.1e1 / M_PI);
  t27 = t26 * t26;
  t28 = 0.1e1 / t27;
  t29 = M_CBRT4;
  t30 = t29 * t29;
  t31 = t28 * t30;
  t32 = POW_1_3(t2);
  t33 = t32 * t32;
  t34 = t31 * t33;
  t35 = t24 * t34;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t35 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t36 = 0.5e1 / 0.9e1 * t35;
  t38 = t33 * t2 * params->ax;
  t39 = t2 * t2;
  t40 = 0.1e1 / t39;
  t41 = t1 * t40;
  t42 = t3 - t41;
  t45 = my_piecewise3(t6, 0, 0.5e1 / 0.3e1 * t11 * t42);
  t46 = -t42;
  t49 = my_piecewise3(t15, 0, 0.5e1 / 0.3e1 * t17 * t46);
  t51 = t45 / 0.2e1 + t49 / 0.2e1;
  t54 = t23 * t28 * t30;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t36 + t38 * t51 * t54 / 0.3e1;

  t57 = -t3 - t41;
  t60 = my_piecewise3(t6, 0, 0.5e1 / 0.3e1 * t11 * t57);
  t61 = -t57;
  t64 = my_piecewise3(t15, 0, 0.5e1 / 0.3e1 * t17 * t61);
  t66 = t60 / 0.2e1 + t64 / 0.2e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t36 + t38 * t66 * t54 / 0.3e1;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t71 = params->ax * t51 * t23;
  t72 = t71 * t34;
  t74 = 0.1e1 / t32;
  t75 = t31 * t74;
  t77 = 0.10e2 / 0.27e2 * t24 * t75;
  t78 = 0.1e1 / t10;
  t79 = t42 * t42;
  t83 = 0.1e1 / t39 / t2;
  t84 = t1 * t83;
  t86 = -0.2e1 * t40 + 0.2e1 * t84;
  t90 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t78 * t79 + 0.5e1 / 0.3e1 * t11 * t86);
  t91 = 0.1e1 / t16;
  t92 = t46 * t46;
  t95 = -t86;
  t99 = my_piecewise3(t15, 0, 0.10e2 / 0.9e1 * t91 * t92 + 0.5e1 / 0.3e1 * t17 * t95);
  t101 = t90 / 0.2e1 + t99 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.10e2 / 0.9e1 * t72 + t77 + t38 * t101 * t54 / 0.3e1;

  t106 = t33 * params->ax;
  t108 = t106 * t66 * t54;
  t110 = t78 * t57;
  t113 = t11 * t1;
  t117 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t110 * t42 + 0.10e2 / 0.3e1 * t113 * t83);
  t118 = t91 * t61;
  t121 = t17 * t1;
  t125 = my_piecewise3(t15, 0, 0.10e2 / 0.9e1 * t118 * t46 - 0.10e2 / 0.3e1 * t121 * t83);
  t127 = t117 / 0.2e1 + t125 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.5e1 / 0.9e1 * t72 + t77 + 0.5e1 / 0.9e1 * t108 + t38 * t127 * t54 / 0.3e1;

  t132 = t57 * t57;
  t136 = 0.2e1 * t40 + 0.2e1 * t84;
  t140 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t78 * t132 + 0.5e1 / 0.3e1 * t11 * t136);
  t141 = t61 * t61;
  t144 = -t136;
  t148 = my_piecewise3(t15, 0, 0.10e2 / 0.9e1 * t91 * t141 + 0.5e1 / 0.3e1 * t17 * t144);
  t150 = t140 / 0.2e1 + t148 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.10e2 / 0.9e1 * t108 + t77 + t38 * t150 * t54 / 0.3e1;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t155 = params->ax * t101 * t23;
  t156 = t155 * t34;
  t158 = t71 * t75;
  t161 = 0.1e1 / t32 / t2;
  t162 = t31 * t161;
  t164 = 0.10e2 / 0.81e2 * t24 * t162;
  t166 = 0.1e1 / t10 / t5;
  t167 = t79 * t42;
  t170 = t78 * t42;
  t173 = t39 * t39;
  t174 = 0.1e1 / t173;
  t175 = t1 * t174;
  t177 = 0.6e1 * t83 - 0.6e1 * t175;
  t181 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t166 * t167 + 0.10e2 / 0.3e1 * t170 * t86 + 0.5e1 / 0.3e1 * t11 * t177);
  t183 = 0.1e1 / t16 / t14;
  t184 = t92 * t46;
  t187 = t91 * t46;
  t190 = -t177;
  t194 = my_piecewise3(t15, 0, -0.10e2 / 0.27e2 * t183 * t184 + 0.10e2 / 0.3e1 * t187 * t95 + 0.5e1 / 0.3e1 * t17 * t190);
  t196 = t181 / 0.2e1 + t194 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.5e1 / 0.3e1 * t156 + 0.10e2 / 0.9e1 * t158 - t164 + t38 * t196 * t54 / 0.3e1;

  t202 = t74 * params->ax;
  t204 = t202 * t66 * t54;
  t208 = 0.10e2 / 0.9e1 * t106 * t127 * t54;
  t209 = t166 * t57;
  t212 = t78 * t1;
  t223 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t209 * t79 + 0.40e2 / 0.9e1 * t212 * t83 * t42 + 0.10e2 / 0.9e1 * t110 * t86 + 0.10e2 / 0.3e1 * t11 * t83 - 0.10e2 * t113 * t174);
  t224 = t183 * t61;
  t227 = t91 * t1;
  t238 = my_piecewise3(t15, 0, -0.10e2 / 0.27e2 * t224 * t92 - 0.40e2 / 0.9e1 * t227 * t83 * t46 + 0.10e2 / 0.9e1 * t118 * t95 - 0.10e2 / 0.3e1 * t17 * t83 + 0.10e2 * t121 * t174);
  t240 = t223 / 0.2e1 + t238 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.5e1 / 0.9e1 * t156 + 0.20e2 / 0.27e2 * t158 - t164 + 0.10e2 / 0.27e2 * t204 + t208 + t38 * t240 * t54 / 0.3e1;

  t247 = t106 * t150 * t54;
  t249 = t166 * t132;
  t254 = t78 * t136;
  t259 = -0.2e1 * t83 - 0.6e1 * t175;
  t263 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t249 * t42 + 0.40e2 / 0.9e1 * t110 * t84 + 0.10e2 / 0.9e1 * t254 * t42 + 0.5e1 / 0.3e1 * t11 * t259);
  t264 = t183 * t141;
  t269 = t91 * t144;
  t272 = -t259;
  t276 = my_piecewise3(t15, 0, -0.10e2 / 0.27e2 * t264 * t46 - 0.40e2 / 0.9e1 * t118 * t84 + 0.10e2 / 0.9e1 * t269 * t46 + 0.5e1 / 0.3e1 * t17 * t272);
  t278 = t263 / 0.2e1 + t276 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = 0.20e2 / 0.27e2 * t204 + t208 + 0.10e2 / 0.27e2 * t158 - t164 + 0.5e1 / 0.9e1 * t247 + t38 * t278 * t54 / 0.3e1;

  t284 = t132 * t57;
  t290 = -0.6e1 * t83 - 0.6e1 * t175;
  t294 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t166 * t284 + 0.10e2 / 0.3e1 * t110 * t136 + 0.5e1 / 0.3e1 * t11 * t290);
  t295 = t141 * t61;
  t300 = -t290;
  t304 = my_piecewise3(t15, 0, -0.10e2 / 0.27e2 * t183 * t295 + 0.10e2 / 0.3e1 * t118 * t144 + 0.5e1 / 0.3e1 * t17 * t300);
  t306 = t294 / 0.2e1 + t304 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.10e2 / 0.9e1 * t204 + 0.5e1 / 0.3e1 * t247 - t164 + t38 * t306 * t54 / 0.3e1;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t312 = params->ax * t196 * t23 * t34;
  t314 = t155 * t75;
  t316 = t71 * t162;
  t322 = 0.40e2 / 0.243e3 * t24 * t31 / t32 / t39;
  t323 = t5 * t5;
  t325 = 0.1e1 / t10 / t323;
  t326 = t79 * t79;
  t332 = t86 * t86;
  t338 = 0.1e1 / t173 / t2;
  t339 = t1 * t338;
  t341 = -0.24e2 * t174 + 0.24e2 * t339;
  t345 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t325 * t326 - 0.20e2 / 0.9e1 * t166 * t79 * t86 + 0.10e2 / 0.3e1 * t78 * t332 + 0.40e2 / 0.9e1 * t170 * t177 + 0.5e1 / 0.3e1 * t11 * t341);
  t346 = t14 * t14;
  t348 = 0.1e1 / t16 / t346;
  t349 = t92 * t92;
  t355 = t95 * t95;
  t364 = my_piecewise3(t15, 0, 0.40e2 / 0.81e2 * t348 * t349 - 0.20e2 / 0.9e1 * t183 * t92 * t95 + 0.10e2 / 0.3e1 * t91 * t355 + 0.40e2 / 0.9e1 * t187 * t190 - 0.5e1 / 0.3e1 * t17 * t341);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.20e2 / 0.9e1 * t312 + 0.20e2 / 0.9e1 * t314 - 0.40e2 / 0.81e2 * t316 + t322 + t38 * (t345 / 0.2e1 + t364 / 0.2e1) * t54 / 0.3e1;

  t375 = t161 * params->ax * t66 * t54;
  t378 = t202 * t127 * t54;
  t379 = 0.10e2 / 0.9e1 * t378;
  t381 = t106 * t240 * t54;
  t407 = 0.40e2 * t113 * t338;
  t409 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t325 * t57 * t167 - 0.20e2 / 0.9e1 * t166 * t1 * t83 * t79 - 0.10e2 / 0.9e1 * t209 * t42 * t86 + 0.20e2 / 0.3e1 * t78 * t83 * t42 - 0.20e2 * t212 * t174 * t42 + 0.20e2 / 0.3e1 * t212 * t83 * t86 + 0.10e2 / 0.9e1 * t110 * t177 - 0.20e2 * t11 * t174 + t407);
  t434 = 0.40e2 * t121 * t338;
  t436 = my_piecewise3(t15, 0, 0.40e2 / 0.81e2 * t348 * t61 * t184 + 0.20e2 / 0.9e1 * t183 * t1 * t83 * t92 - 0.10e2 / 0.9e1 * t224 * t46 * t95 - 0.20e2 / 0.3e1 * t91 * t83 * t46 + 0.20e2 * t227 * t174 * t46 - 0.20e2 / 0.3e1 * t227 * t83 * t95 + 0.10e2 / 0.9e1 * t118 * t190 + 0.20e2 * t17 * t174 - t434);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = 0.5e1 / 0.9e1 * t312 + 0.10e2 / 0.9e1 * t314 - 0.10e2 / 0.27e2 * t316 + t322 - 0.10e2 / 0.81e2 * t375 + t379 + 0.5e1 / 0.3e1 * t381 + t38 * (t409 / 0.2e1 + t436 / 0.2e1) * t54 / 0.3e1;

  t448 = t202 * t150 * t54;
  t451 = t106 * t278 * t54;
  t462 = t1 * t1;
  t465 = 0.1e1 / t173 / t39;
  t481 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t325 * t132 * t79 - 0.80e2 / 0.27e2 * t209 * t42 * t1 * t83 - 0.10e2 / 0.27e2 * t249 * t86 + 0.80e2 / 0.9e1 * t78 * t462 * t465 + 0.40e2 / 0.9e1 * t110 * t83 - 0.40e2 / 0.3e1 * t110 * t175 - 0.10e2 / 0.27e2 * t166 * t136 * t79 + 0.20e2 / 0.9e1 * t78 * t259 * t42 + 0.10e2 / 0.9e1 * t254 * t86 + t407);
  t507 = my_piecewise3(t15, 0, 0.40e2 / 0.81e2 * t348 * t141 * t92 + 0.80e2 / 0.27e2 * t224 * t46 * t1 * t83 - 0.10e2 / 0.27e2 * t264 * t95 + 0.80e2 / 0.9e1 * t91 * t462 * t465 - 0.40e2 / 0.9e1 * t118 * t83 + 0.40e2 / 0.3e1 * t118 * t175 - 0.10e2 / 0.27e2 * t183 * t144 * t92 + 0.20e2 / 0.9e1 * t91 * t272 * t46 + 0.10e2 / 0.9e1 * t269 * t95 - t434);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -0.20e2 / 0.81e2 * t375 + 0.40e2 / 0.27e2 * t378 + 0.10e2 / 0.9e1 * t381 + 0.10e2 / 0.27e2 * t314 - 0.20e2 / 0.81e2 * t316 + t322 + 0.10e2 / 0.27e2 * t448 + 0.10e2 / 0.9e1 * t451 + t38 * (t481 / 0.2e1 + t507 / 0.2e1) * t54 / 0.3e1;

  t518 = t106 * t306 * t54;
  t538 = 0.12e2 * t174 + 0.24e2 * t339;
  t542 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t325 * t284 * t42 - 0.20e2 / 0.9e1 * t249 * t84 - 0.10e2 / 0.9e1 * t209 * t136 * t42 + 0.20e2 / 0.3e1 * t212 * t83 * t136 + 0.10e2 / 0.3e1 * t110 * t259 + 0.10e2 / 0.9e1 * t78 * t290 * t42 + 0.5e1 / 0.3e1 * t11 * t538);
  t563 = my_piecewise3(t15, 0, 0.40e2 / 0.81e2 * t348 * t295 * t46 + 0.20e2 / 0.9e1 * t264 * t84 - 0.10e2 / 0.9e1 * t224 * t144 * t46 - 0.20e2 / 0.3e1 * t227 * t83 * t144 + 0.10e2 / 0.3e1 * t118 * t272 + 0.10e2 / 0.9e1 * t91 * t300 * t46 - 0.5e1 / 0.3e1 * t17 * t538);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = -0.10e2 / 0.27e2 * t375 + t379 + 0.10e2 / 0.9e1 * t448 + 0.5e1 / 0.3e1 * t451 - 0.10e2 / 0.81e2 * t316 + t322 + 0.5e1 / 0.9e1 * t518 + t38 * (t542 / 0.2e1 + t563 / 0.2e1) * t54 / 0.3e1;

  t572 = t132 * t132;
  t577 = t136 * t136;
  t583 = 0.24e2 * t174 + 0.24e2 * t339;
  t587 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t325 * t572 - 0.20e2 / 0.9e1 * t249 * t136 + 0.10e2 / 0.3e1 * t78 * t577 + 0.40e2 / 0.9e1 * t110 * t290 + 0.5e1 / 0.3e1 * t11 * t583);
  t588 = t141 * t141;
  t593 = t144 * t144;
  t602 = my_piecewise3(t15, 0, 0.40e2 / 0.81e2 * t348 * t588 - 0.20e2 / 0.9e1 * t264 * t144 + 0.10e2 / 0.3e1 * t91 * t593 + 0.40e2 / 0.9e1 * t118 * t300 - 0.5e1 / 0.3e1 * t17 * t583);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = -0.40e2 / 0.81e2 * t375 + 0.20e2 / 0.9e1 * t448 + 0.20e2 / 0.9e1 * t518 + t322 + t38 * (t587 / 0.2e1 + t602 / 0.2e1) * t54 / 0.3e1;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

