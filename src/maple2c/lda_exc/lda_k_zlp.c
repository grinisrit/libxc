/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_k_zlp.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t6, t7, t8, t9;
  double t10, t11, t13, t14, t17, t19;

#ifndef XC_DONT_COMPILE_VXC
  double t21, t22, t23, t28, t31;

#ifndef XC_DONT_COMPILE_FXC
  double t35, t45, t50, t51, t52, t55;

#ifndef XC_DONT_COMPILE_KXC
  double t61, t75, t84, t86, t89;

#ifndef XC_DONT_COMPILE_LXC
  double t108, t122;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = t1 * t1;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = 0.1e1 / t4;
  t6 = t2 * t5;
  t7 = M_CBRT4;
  t8 = POW_1_3(rho[0]);
  t9 = t8 * t8;
  t10 = t7 * t9;
  t11 = 0.1e1 / t8;
  t13 = 0.1e1 + 0.51020408163265306120e3 * t11;
  t14 = log(t13);
  t17 = 0.1e1 - 0.19600000000000000000e-2 * t8 * t14;
  t19 = t6 * t10 * t17;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10790666666666666667e1 * t19;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t21 = t9 * rho[0];
  t22 = t21 * t2;
  t23 = t5 * t7;
  t28 = 0.1e1 / t13;
  t31 = -0.65333333333333333333e-3 / t9 * t14 + 0.33333333333333333331e0 / rho[0] * t28;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.17984444444444444445e1 * t19 + 0.10790666666666666667e1 * t22 * t23 * t31;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t35 = t7 * t11;
  t45 = rho[0] * rho[0];
  t50 = 0.1e1 / t8 / t45;
  t51 = t13 * t13;
  t52 = 0.1e1 / t51;
  t55 = 0.43555555555555555555e-3 / t21 * t14 - 0.22222222222222222221e0 / t45 * t28 + 0.56689342403628117906e2 * t50 * t52;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.11989629629629629630e1 * t6 * t35 * t17 + 0.35968888888888888890e1 * t6 * t10 * t31 + 0.10790666666666666667e1 * t22 * t23 * t55;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t61 = t7 / t8 / rho[0];
  t75 = t45 * rho[0];
  t84 = 0.1e1 / t9 / t75;
  t86 = 0.1e1 / t51 / t13;
  t89 = -0.72592592592592592592e-3 / t9 / t45 * t14 + 0.37037037037037037035e0 / t75 * t28 - 0.17006802721088435372e3 / t8 / t75 * t52 + 0.19282089252934733980e5 * t84 * t86;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.39965432098765432100e0 * t6 * t61 * t17 + 0.35968888888888888890e1 * t6 * t35 * t31 + 0.53953333333333333335e1 * t6 * t10 * t55 + 0.10790666666666666667e1 * t22 * t23 * t89;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t108 = t45 * t45;
  t122 = t51 * t51;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.53287242798353909467e0 * t6 * t7 * t50 * t17 - 0.15986172839506172840e1 * t6 * t61 * t31 + 0.71937777777777777780e1 * t6 * t35 * t55 + 0.71937777777777777780e1 * t6 * t10 * t89 + 0.10790666666666666667e1 * t22 * t23 * (0.19358024691358024691e-2 * t84 * t14 - 0.98765432098765432089e0 / t108 * t28 + 0.62988158226253464341e3 / t8 / t108 * t52 - 0.12854726168623155987e6 / t9 / t108 * t86 + 0.98378006392524152953e7 / t108 / rho[0] / t122);

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
  double t1, t2, t4, t5, t7, t8, t9, t10;
  double t11, t12, t13, t14, t15, t17, t18, t19;
  double t22, t23, t24, t25, t26, t28, t29, t32;
  double t34;

#ifndef XC_DONT_COMPILE_VXC
  double t35, t36, t38, t39, t40, t41, t42, t44;
  double t47, t48, t52, t56, t59, t62, t63, t65;
  double t69, t70;

#ifndef XC_DONT_COMPILE_FXC
  double t73, t75, t77, t80, t83, t84, t85, t88;
  double t89, t90, t92, t95, t96, t99, t102, t103;
  double t108, t116, t117, t118, t121, t124, t127, t128;
  double t130, t133, t136, t139, t143, t144, t147, t148;
  double t152, t156, t159, t162, t166, t167;

#ifndef XC_DONT_COMPILE_KXC
  double t171, t173, t175, t177, t180, t183, t184, t187;
  double t190, t193, t195, t196, t199, t202, t203, t204;
  double t206, t210, t211, t214, t217, t220, t221, t226;
  double t229, t242, t244, t247, t250, t255, t256, t259;
  double t260, t262, t265, t275, t278, t289, t290, t293;
  double t295, t296, t297, t305, t307, t312, t317, t320;
  double t325, t328, t332, t333, t336, t337, t344, t350;
  double t353, t358, t362, t363;

#ifndef XC_DONT_COMPILE_LXC
  double t370, t374, t379, t382, t385, t388, t391, t395;
  double t398, t401, t402, t404, t405, t411, t417, t418;
  double t420, t423, t425, t426, t432, t446, t449, t452;
  double t466, t473, t478, t485, t488, t489, t490, t492;
  double t494, t495, t496, t521, t539, t548, t554, t557;
  double t558, t560, t562, t571, t580, t582, t584, t595;
  double t598, t637, t643, t646, t648, t655, t681, t703;
  double t709, t711, t713, t722, t727, t733, t736, t741;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = t1 * t1;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = 0.1e1 / t4;
  t7 = M_CBRT4;
  t8 = t2 * t5 * t7;
  t9 = rho[0] - rho[1];
  t10 = rho[0] + rho[1];
  t11 = 0.1e1 / t10;
  t12 = t9 * t11;
  t13 = 0.1e1 + t12;
  t14 = POW_1_3(t13);
  t15 = t14 * t14;
  t17 = 0.1e1 - t12;
  t18 = POW_1_3(t17);
  t19 = t18 * t18;
  t22 = t15 * t13 / 0.2e1 + t19 * t17 / 0.2e1;
  t23 = POW_1_3(t10);
  t24 = t23 * t23;
  t25 = t22 * t24;
  t26 = 0.1e1 / t23;
  t28 = 0.1e1 + 0.51020408163265306120e3 * t26;
  t29 = log(t28);
  t32 = 0.1e1 - 0.19600000000000000000e-2 * t23 * t29;
  t34 = t8 * t25 * t32;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10790666666666666667e1 * t34;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t35 = 0.17984444444444444445e1 * t34;
  t36 = t24 * t10;
  t38 = t36 * t2 * t5;
  t39 = t10 * t10;
  t40 = 0.1e1 / t39;
  t41 = t9 * t40;
  t42 = t11 - t41;
  t44 = -t42;
  t47 = 0.5e1 / 0.6e1 * t15 * t42 + 0.5e1 / 0.6e1 * t19 * t44;
  t48 = t7 * t47;
  t52 = t7 * t22;
  t56 = 0.1e1 / t28;
  t59 = -0.65333333333333333333e-3 / t24 * t29 + 0.33333333333333333331e0 * t11 * t56;
  t62 = 0.10790666666666666667e1 * t38 * t52 * t59;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t35 + 0.10790666666666666667e1 * t38 * t48 * t32 + t62;

  t63 = -t11 - t41;
  t65 = -t63;
  t69 = t7 * (0.5e1 / 0.6e1 * t15 * t63 + 0.5e1 / 0.6e1 * t19 * t65);
  t70 = t69 * t32;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t35 + 0.10790666666666666667e1 * t38 * t70 + t62;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t73 = t47 * t24;
  t75 = t8 * t73 * t32;
  t77 = t22 * t26;
  t80 = 0.11989629629629629630e1 * t8 * t77 * t32;
  t83 = 0.35968888888888888890e1 * t8 * t25 * t59;
  t84 = 0.1e1 / t14;
  t85 = t42 * t42;
  t88 = t39 * t10;
  t89 = 0.1e1 / t88;
  t90 = t9 * t89;
  t92 = -0.2e1 * t40 + 0.2e1 * t90;
  t95 = 0.1e1 / t18;
  t96 = t44 * t44;
  t99 = -t92;
  t102 = 0.5e1 / 0.9e1 * t84 * t85 + 0.5e1 / 0.6e1 * t15 * t92 + 0.5e1 / 0.9e1 * t95 * t96 + 0.5e1 / 0.6e1 * t19 * t99;
  t103 = t7 * t102;
  t108 = t38 * t48 * t59;
  t116 = 0.1e1 / t23 / t39;
  t117 = t28 * t28;
  t118 = 0.1e1 / t117;
  t121 = 0.43555555555555555555e-3 / t36 * t29 - 0.22222222222222222221e0 * t40 * t56 + 0.56689342403628117906e2 * t116 * t118;
  t124 = 0.10790666666666666667e1 * t38 * t52 * t121;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.35968888888888888890e1 * t75 + t80 + t83 + 0.10790666666666666667e1 * t38 * t103 * t32 + 0.21581333333333333334e1 * t108 + t124;

  t127 = t24 * t2 * t5;
  t128 = t127 * t70;
  t130 = t84 * t63;
  t133 = t15 * t9;
  t136 = t95 * t65;
  t139 = t19 * t9;
  t143 = t7 * (0.5e1 / 0.9e1 * t130 * t42 + 0.5e1 / 0.3e1 * t133 * t89 + 0.5e1 / 0.9e1 * t136 * t44 - 0.5e1 / 0.3e1 * t139 * t89);
  t144 = t143 * t32;
  t147 = t69 * t59;
  t148 = t38 * t147;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.17984444444444444445e1 * t75 + t80 + t83 + 0.17984444444444444445e1 * t128 + 0.10790666666666666667e1 * t38 * t144 + 0.10790666666666666667e1 * t148 + 0.10790666666666666667e1 * t108 + t124;

  t152 = t63 * t63;
  t156 = 0.2e1 * t40 + 0.2e1 * t90;
  t159 = t65 * t65;
  t162 = -t156;
  t166 = t7 * (0.5e1 / 0.9e1 * t84 * t152 + 0.5e1 / 0.6e1 * t15 * t156 + 0.5e1 / 0.9e1 * t95 * t159 + 0.5e1 / 0.6e1 * t19 * t162);
  t167 = t166 * t32;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.35968888888888888890e1 * t128 + t80 + t83 + 0.10790666666666666667e1 * t38 * t167 + 0.21581333333333333334e1 * t148 + t124;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t171 = t102 * t24;
  t173 = t8 * t171 * t32;
  t175 = t47 * t26;
  t177 = t8 * t175 * t32;
  t180 = t8 * t73 * t59;
  t183 = 0.1e1 / t23 / t10;
  t184 = t22 * t183;
  t187 = 0.39965432098765432100e0 * t8 * t184 * t32;
  t190 = 0.35968888888888888890e1 * t8 * t77 * t59;
  t193 = 0.53953333333333333335e1 * t8 * t25 * t121;
  t195 = 0.1e1 / t14 / t13;
  t196 = t85 * t42;
  t199 = t84 * t42;
  t202 = t39 * t39;
  t203 = 0.1e1 / t202;
  t204 = t9 * t203;
  t206 = 0.6e1 * t89 - 0.6e1 * t204;
  t210 = 0.1e1 / t18 / t17;
  t211 = t96 * t44;
  t214 = t95 * t44;
  t217 = -t206;
  t220 = -0.5e1 / 0.27e2 * t195 * t196 + 0.5e1 / 0.3e1 * t199 * t92 + 0.5e1 / 0.6e1 * t15 * t206 - 0.5e1 / 0.27e2 * t210 * t211 + 0.5e1 / 0.3e1 * t214 * t99 + 0.5e1 / 0.6e1 * t19 * t217;
  t221 = t7 * t220;
  t226 = t38 * t103 * t59;
  t229 = t38 * t48 * t121;
  t242 = 0.1e1 / t24 / t88;
  t244 = 0.1e1 / t117 / t28;
  t247 = -0.72592592592592592592e-3 / t24 / t39 * t29 + 0.37037037037037037035e0 * t89 * t56 - 0.17006802721088435372e3 / t23 / t88 * t118 + 0.19282089252934733980e5 * t242 * t244;
  t250 = 0.10790666666666666667e1 * t38 * t52 * t247;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.53953333333333333335e1 * t173 + 0.35968888888888888890e1 * t177 + 0.10790666666666666667e2 * t180 - t187 + t190 + t193 + 0.10790666666666666667e1 * t38 * t221 * t32 + 0.32372000000000000001e1 * t226 + 0.32372000000000000001e1 * t229 + t250;

  t255 = t26 * t2 * t5;
  t256 = t255 * t70;
  t259 = 0.35968888888888888890e1 * t127 * t144;
  t260 = t127 * t147;
  t262 = t195 * t63;
  t265 = t84 * t9;
  t275 = t210 * t65;
  t278 = t95 * t9;
  t289 = t7 * (-0.5e1 / 0.27e2 * t262 * t85 + 0.20e2 / 0.9e1 * t265 * t89 * t42 + 0.5e1 / 0.9e1 * t130 * t92 + 0.5e1 / 0.3e1 * t15 * t89 - 0.5e1 * t133 * t203 - 0.5e1 / 0.27e2 * t275 * t96 - 0.20e2 / 0.9e1 * t278 * t89 * t44 + 0.5e1 / 0.9e1 * t136 * t99 - 0.5e1 / 0.3e1 * t19 * t89 + 0.5e1 * t139 * t203);
  t290 = t289 * t32;
  t293 = t143 * t59;
  t295 = 0.21581333333333333334e1 * t38 * t293;
  t296 = t69 * t121;
  t297 = t38 * t296;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.17984444444444444445e1 * t173 + 0.23979259259259259260e1 * t177 + 0.71937777777777777780e1 * t180 - t187 + t190 + t193 + 0.11989629629629629630e1 * t256 + t259 + 0.35968888888888888890e1 * t260 + 0.10790666666666666667e1 * t38 * t290 + t295 + 0.10790666666666666667e1 * t297 + 0.10790666666666666667e1 * t226 + 0.21581333333333333334e1 * t229 + t250;

  t305 = t127 * t167;
  t307 = t195 * t152;
  t312 = t84 * t156;
  t317 = -0.2e1 * t89 - 0.6e1 * t204;
  t320 = t210 * t159;
  t325 = t95 * t162;
  t328 = -t317;
  t332 = t7 * (-0.5e1 / 0.27e2 * t307 * t42 + 0.20e2 / 0.9e1 * t130 * t90 + 0.5e1 / 0.9e1 * t312 * t42 + 0.5e1 / 0.6e1 * t15 * t317 - 0.5e1 / 0.27e2 * t320 * t44 - 0.20e2 / 0.9e1 * t136 * t90 + 0.5e1 / 0.9e1 * t325 * t44 + 0.5e1 / 0.6e1 * t19 * t328);
  t333 = t332 * t32;
  t336 = t166 * t59;
  t337 = t38 * t336;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = 0.23979259259259259260e1 * t256 + t259 + 0.71937777777777777780e1 * t260 + 0.11989629629629629630e1 * t177 - t187 + t190 + 0.35968888888888888890e1 * t180 + t193 + 0.17984444444444444445e1 * t305 + 0.10790666666666666667e1 * t38 * t333 + 0.10790666666666666667e1 * t337 + t295 + 0.21581333333333333334e1 * t297 + 0.10790666666666666667e1 * t229 + t250;

  t344 = t152 * t63;
  t350 = -0.6e1 * t89 - 0.6e1 * t204;
  t353 = t159 * t65;
  t358 = -t350;
  t362 = t7 * (-0.5e1 / 0.27e2 * t195 * t344 + 0.5e1 / 0.3e1 * t130 * t156 + 0.5e1 / 0.6e1 * t15 * t350 - 0.5e1 / 0.27e2 * t210 * t353 + 0.5e1 / 0.3e1 * t136 * t162 + 0.5e1 / 0.6e1 * t19 * t358);
  t363 = t362 * t32;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.35968888888888888890e1 * t256 + 0.53953333333333333335e1 * t305 + 0.10790666666666666667e2 * t260 - t187 + t190 + t193 + 0.10790666666666666667e1 * t38 * t363 + 0.32372000000000000001e1 * t337 + 0.32372000000000000001e1 * t297 + t250;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t370 = t8 * t102 * t26 * t32;
  t374 = t8 * t47 * t183 * t32;
  t379 = 0.53287242798353909467e0 * t8 * t22 * t116 * t32;
  t382 = t8 * t220 * t24 * t32;
  t385 = t8 * t171 * t59;
  t388 = t8 * t175 * t59;
  t391 = t8 * t73 * t121;
  t395 = 0.15986172839506172840e1 * t8 * t184 * t59;
  t398 = 0.71937777777777777780e1 * t8 * t77 * t121;
  t401 = 0.71937777777777777780e1 * t8 * t25 * t247;
  t402 = t13 * t13;
  t404 = 0.1e1 / t14 / t402;
  t405 = t85 * t85;
  t411 = t92 * t92;
  t417 = 0.1e1 / t202 / t10;
  t418 = t9 * t417;
  t420 = -0.24e2 * t203 + 0.24e2 * t418;
  t423 = t17 * t17;
  t425 = 0.1e1 / t18 / t423;
  t426 = t96 * t96;
  t432 = t99 * t99;
  t446 = t38 * t221 * t59;
  t449 = t38 * t103 * t121;
  t452 = t38 * t48 * t247;
  t466 = t117 * t117;
  t473 = 0.10790666666666666667e1 * t38 * t52 * (0.19358024691358024691e-2 * t242 * t29 - 0.98765432098765432089e0 * t203 * t56 + 0.62988158226253464341e3 / t23 / t202 * t118 - 0.12854726168623155987e6 / t24 / t202 * t244 + 0.98378006392524152953e7 * t417 / t466);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.71937777777777777780e1 * t370 - 0.15986172839506172840e1 * t374 + t379 + 0.71937777777777777780e1 * t382 + 0.21581333333333333334e2 * t385 + 0.14387555555555555556e2 * t388 + 0.21581333333333333334e2 * t391 - t395 + t398 + t401 + 0.10790666666666666667e1 * t38 * t7 * (0.20e2 / 0.81e2 * t404 * t405 - 0.10e2 / 0.9e1 * t195 * t85 * t92 + 0.5e1 / 0.3e1 * t84 * t411 + 0.20e2 / 0.9e1 * t199 * t206 + 0.5e1 / 0.6e1 * t15 * t420 + 0.20e2 / 0.81e2 * t425 * t426 - 0.10e2 / 0.9e1 * t210 * t96 * t99 + 0.5e1 / 0.3e1 * t95 * t432 + 0.20e2 / 0.9e1 * t214 * t217 - 0.5e1 / 0.6e1 * t19 * t420) * t32 + 0.43162666666666666668e1 * t446 + 0.64744000000000000002e1 * t449 + 0.43162666666666666668e1 * t452 + t473;

  t478 = t183 * t2 * t5 * t70;
  t485 = 0.35968888888888888890e1 * t370 - 0.11989629629629629630e1 * t374 + t379 - 0.39965432098765432100e0 * t478 + 0.17984444444444444445e1 * t382 + 0.10790666666666666667e2 * t385 + 0.10790666666666666667e2 * t388 + 0.16186000000000000001e2 * t391 - t395 + t398 + t401 + 0.10790666666666666667e1 * t446;
  t488 = t255 * t144;
  t489 = 0.35968888888888888890e1 * t488;
  t490 = t255 * t147;
  t492 = t127 * t290;
  t494 = t127 * t293;
  t495 = 0.10790666666666666667e2 * t494;
  t496 = t127 * t296;
  t521 = 0.20e2 * t133 * t417;
  t539 = 0.20e2 * t139 * t417;
  t548 = -0.10e2 * t265 * t203 * t42 + 0.10e2 * t278 * t203 * t44 + 0.20e2 / 0.81e2 * t404 * t63 * t196 - 0.5e1 / 0.9e1 * t262 * t42 * t92 - 0.10e2 / 0.9e1 * t195 * t9 * t89 * t85 + 0.10e2 / 0.3e1 * t84 * t89 * t42 + 0.10e2 / 0.3e1 * t265 * t89 * t92 + t521 + 0.20e2 / 0.81e2 * t425 * t65 * t211 - 0.5e1 / 0.9e1 * t275 * t44 * t99 + 0.10e2 / 0.9e1 * t210 * t9 * t89 * t96 - 0.10e2 / 0.3e1 * t95 * t89 * t44 - 0.10e2 / 0.3e1 * t278 * t89 * t99 - t539 + 0.5e1 / 0.9e1 * t130 * t206 - 0.10e2 * t15 * t203 + 0.5e1 / 0.9e1 * t136 * t217 + 0.10e2 * t19 * t203;
  t554 = t38 * t289 * t59;
  t557 = t38 * t143 * t121;
  t558 = 0.32372000000000000001e1 * t557;
  t560 = t38 * t69 * t247;
  t562 = 0.32372000000000000001e1 * t449 + 0.32372000000000000001e1 * t452 + t473 + t489 + 0.35968888888888888890e1 * t490 + 0.53953333333333333335e1 * t492 + t495 + 0.53953333333333333335e1 * t496 + 0.10790666666666666667e1 * t38 * t7 * t548 * t32 + 0.32372000000000000001e1 * t554 + t558 + 0.10790666666666666667e1 * t560;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t485 + t562;

  t571 = 0.11989629629629629630e1 * t370 - 0.79930864197530864200e0 * t374 + t379 + 0.35968888888888888890e1 * t385 + 0.71937777777777777780e1 * t388 + 0.10790666666666666667e2 * t391 - t395 + t398 + t401 + 0.10790666666666666667e1 * t449 + 0.21581333333333333334e1 * t452 + t473 - 0.79930864197530864200e0 * t478;
  t580 = t255 * t167;
  t582 = t127 * t333;
  t584 = t127 * t336;
  t595 = t9 * t9;
  t598 = 0.1e1 / t202 / t39;
  t637 = 0.20e2 / 0.81e2 * t404 * t152 * t85 - 0.40e2 / 0.27e2 * t262 * t42 * t9 * t89 - 0.5e1 / 0.27e2 * t307 * t92 + 0.40e2 / 0.9e1 * t84 * t595 * t598 + 0.20e2 / 0.9e1 * t130 * t89 - 0.20e2 / 0.3e1 * t130 * t204 - 0.5e1 / 0.27e2 * t195 * t156 * t85 + 0.10e2 / 0.9e1 * t84 * t317 * t42 + 0.5e1 / 0.9e1 * t312 * t92 + t521 + 0.20e2 / 0.81e2 * t425 * t159 * t96 + 0.40e2 / 0.27e2 * t275 * t44 * t9 * t89 - 0.5e1 / 0.27e2 * t320 * t99 + 0.40e2 / 0.9e1 * t95 * t595 * t598 - 0.20e2 / 0.9e1 * t136 * t89 + 0.20e2 / 0.3e1 * t136 * t204 - 0.5e1 / 0.27e2 * t210 * t162 * t96 + 0.10e2 / 0.9e1 * t95 * t328 * t44 + 0.5e1 / 0.9e1 * t325 * t99 - t539;
  t643 = t38 * t332 * t59;
  t646 = t38 * t166 * t121;
  t648 = 0.47958518518518518520e1 * t488 + 0.71937777777777777780e1 * t490 + 0.35968888888888888890e1 * t492 + 0.14387555555555555556e2 * t494 + 0.10790666666666666667e2 * t496 + 0.21581333333333333334e1 * t554 + 0.43162666666666666668e1 * t557 + 0.21581333333333333334e1 * t560 + 0.11989629629629629630e1 * t580 + 0.35968888888888888890e1 * t582 + 0.35968888888888888890e1 * t584 + 0.10790666666666666667e1 * t38 * t7 * t637 * t32 + 0.21581333333333333334e1 * t643 + 0.10790666666666666667e1 * t646;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t571 + t648;

  t655 = -0.39965432098765432100e0 * t374 + t379 - 0.11989629629629629630e1 * t478 + 0.35968888888888888890e1 * t580 + 0.35968888888888888890e1 * t388 + 0.53953333333333333335e1 * t391 - t395 + t398 + t401 + 0.10790666666666666667e1 * t452 + t473 + t489;
  t681 = 0.12e2 * t203 + 0.24e2 * t418;
  t703 = 0.20e2 / 0.81e2 * t404 * t344 * t42 - 0.10e2 / 0.9e1 * t307 * t90 - 0.5e1 / 0.9e1 * t262 * t156 * t42 + 0.10e2 / 0.3e1 * t265 * t89 * t156 + 0.5e1 / 0.3e1 * t130 * t317 + 0.5e1 / 0.9e1 * t84 * t350 * t42 + 0.5e1 / 0.6e1 * t15 * t681 + 0.20e2 / 0.81e2 * t425 * t353 * t44 + 0.10e2 / 0.9e1 * t320 * t90 - 0.5e1 / 0.9e1 * t275 * t162 * t44 - 0.10e2 / 0.3e1 * t278 * t89 * t162 + 0.5e1 / 0.3e1 * t136 * t328 + 0.5e1 / 0.9e1 * t95 * t358 * t44 - 0.5e1 / 0.6e1 * t19 * t681;
  t709 = t38 * t362 * t59;
  t711 = t127 * t363;
  t713 = 0.10790666666666666667e2 * t490 + t495 + 0.16186000000000000000e2 * t496 + t558 + 0.32372000000000000001e1 * t560 + 0.53953333333333333335e1 * t582 + 0.10790666666666666667e2 * t584 + 0.32372000000000000001e1 * t643 + 0.32372000000000000001e1 * t646 + 0.10790666666666666667e1 * t38 * t7 * t703 * t32 + 0.10790666666666666667e1 * t709 + 0.17984444444444444445e1 * t711;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t655 + t713;

  t722 = t152 * t152;
  t727 = t156 * t156;
  t733 = 0.24e2 * t203 + 0.24e2 * t418;
  t736 = t159 * t159;
  t741 = t162 * t162;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t379 - 0.15986172839506172840e1 * t478 + 0.71937777777777777780e1 * t580 - t395 + t398 + t401 + t473 + 0.14387555555555555556e2 * t490 + 0.21581333333333333334e2 * t496 + 0.43162666666666666668e1 * t560 + 0.21581333333333333334e2 * t584 + 0.64744000000000000002e1 * t646 + 0.43162666666666666668e1 * t709 + 0.10790666666666666667e1 * t38 * t7 * (0.20e2 / 0.81e2 * t404 * t722 - 0.10e2 / 0.9e1 * t307 * t156 + 0.5e1 / 0.3e1 * t84 * t727 + 0.20e2 / 0.9e1 * t130 * t350 + 0.5e1 / 0.6e1 * t15 * t733 + 0.20e2 / 0.81e2 * t425 * t736 - 0.10e2 / 0.9e1 * t320 * t162 + 0.5e1 / 0.3e1 * t95 * t741 + 0.20e2 / 0.9e1 * t136 * t358 - 0.5e1 / 0.6e1 * t19 * t733) * t32 + 0.71937777777777777780e1 * t711;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

