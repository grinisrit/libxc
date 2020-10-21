/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_x_sloc.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t4, t5, t6;

#ifndef XC_DONT_COMPILE_VXC
  double t8;

#ifndef XC_DONT_COMPILE_FXC
  double t11, t14, t15;

#ifndef XC_DONT_COMPILE_KXC
  double t19, t20, t24;

#ifndef XC_DONT_COMPILE_LXC
  double t29, t36;
#endif

#endif

#endif

#endif

#endif


  lda_x_sloc_params *params;

  assert(p->params != NULL);
  params = (lda_x_sloc_params * )(p->params);

  t4 = params->a / (0.2e1 * params->b + 0.2e1);
  t5 = pow(rho[0], params->b);
  t6 = t4 * t5;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.2e1 * t6;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t8 = t5 * params->b;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.2e1 * t4 * t8 - 0.2e1 * t6;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t11 = 0.1e1 / rho[0];
  t14 = params->b * params->b;
  t15 = t5 * t14;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t4 * t15 * t11 - 0.2e1 * t4 * t8 * t11;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t19 = rho[0] * rho[0];
  t20 = 0.1e1 / t19;
  t24 = t5 * t14 * params->b;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.2e1 * t4 * t24 * t20 + 0.2e1 * t4 * t8 * t20;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t29 = 0.1e1 / t19 / rho[0];
  t36 = t14 * t14;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.2e1 * t4 * t5 * t36 * t29 + 0.2e1 * t4 * t15 * t29 + 0.4e1 * t4 * t24 * t29 - 0.4e1 * t4 * t8 * t29;

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
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14;

#ifndef XC_DONT_COMPILE_VXC
  double t17, t19, t20, t21, t22, t23, t24, t25;
  double t26, t27, t30, t31, t32, t35, t38, t41;
  double t44;

#ifndef XC_DONT_COMPILE_FXC
  double t47, t48, t50, t52, t54, t55, t57, t59;
  double t61, t62, t63, t64, t65, t66, t69, t70;
  double t72, t76, t77, t78, t79, t80, t82, t86;
  double t90, t92, t93, t94, t100, t101, t107, t112;
  double t113, t116, t120, t121, t123, t127;

#ifndef XC_DONT_COMPILE_KXC
  double t130, t132, t134, t137, t139, t140, t142, t144;
  double t147, t149, t150, t151, t153, t154, t156, t161;
  double t162, t163, t165, t172, t173, t175, t176, t178;
  double t183, t190, t196, t199, t201, t204, t205, t206;
  double t208, t209, t213, t214, t215, t224, t225, t226;
  double t232, t233, t235, t236, t240, t241, t242, t251;
  double t252, t253, t259, t265, t267, t268, t269, t271;
  double t276, t280, t284, t289, t290, t292, t297, t299;
  double t303, t308, t315, t316, t318, t319, t325, t332;
  double t333, t335, t336, t341, t348;

#ifndef XC_DONT_COMPILE_LXC
  double t353, t357, t359, t362, t365, t367, t370, t374;
  double t376, t379, t382, t384, t387, t388, t389, t390;
  double t393, t394, t397, t408, t411, t412, t413, t414;
  double t417, t418, t421, t424, t435, t437, t451, t452;
  double t454, t456, t461, t464, t468, t474, t480, t491;
  double t502, t509, t510, t511, t516, t517, t520, t521;
  double t539, t540, t545, t546, t549, t550, t568, t575;
  double t582, t587, t590, t596, t597, t599, t600, t602;
  double t605, t608, t611, t616, t626, t629, t634, t639;
  double t645, t647, t650, t651, t656, t658, t669, t671;
  double t673, t678, t680, t694, t707, t716, t721, t728;
  double t736, t739, t747, t749, t751, t754, t760, t767;
  double t770, t776, t789, t801, t823, t839, t845, t856;
  double t863, t869, t874, t875, t877, t878, t884, t885;
  double t888, t891, t904, t905, t908, t919;
#endif

#endif

#endif

#endif

#endif


  lda_x_sloc_params *params;

  assert(p->params != NULL);
  params = (lda_x_sloc_params * )(p->params);

  t1 = params->b + 0.1e1;
  t3 = 0.1e1 / t1 / 0.2e1;
  t4 = params->a * t3;
  t5 = rho[0] + rho[1];
  t6 = pow(t5, params->b);
  t7 = rho[0] - rho[1];
  t8 = 0.1e1 / t5;
  t9 = t7 * t8;
  t10 = 0.1e1 + t9;
  t11 = pow(t10, t1);
  t12 = 0.1e1 - t9;
  t13 = pow(t12, t1);
  t14 = t11 + t13;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t4 * t6 * t14;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t17 = t6 * params->b;
  t19 = t4 * t17 * t14;
  t20 = t5 * params->a;
  t21 = t3 * t6;
  t22 = t11 * t1;
  t23 = t5 * t5;
  t24 = 0.1e1 / t23;
  t25 = t7 * t24;
  t26 = t8 - t25;
  t27 = 0.1e1 / t10;
  t30 = t13 * t1;
  t31 = -t26;
  t32 = 0.1e1 / t12;
  t35 = t22 * t26 * t27 + t30 * t31 * t32;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t20 * t21 * t35 - t19 + (-t4 * t6 * t14);

  t38 = -t8 - t25;
  t41 = -t38;
  t44 = t22 * t38 * t27 + t30 * t41 * t32;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t20 * t21 * t44 - t19 + (-t4 * t6 * t14);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t47 = t4 * t6;
  t48 = params->b * t8;
  t50 = t47 * t48 * t14;
  t52 = t4 * t6 * t35;
  t54 = params->b * params->b;
  t55 = t54 * t8;
  t57 = t47 * t55 * t14;
  t59 = t4 * t17 * t35;
  t61 = t1 * t1;
  t62 = t11 * t61;
  t63 = t26 * t26;
  t64 = t10 * t10;
  t65 = 0.1e1 / t64;
  t66 = t63 * t65;
  t69 = 0.1e1 / t23 / t5;
  t70 = t7 * t69;
  t72 = -0.2e1 * t24 + 0.2e1 * t70;
  t76 = t13 * t61;
  t77 = t31 * t31;
  t78 = t12 * t12;
  t79 = 0.1e1 / t78;
  t80 = t77 * t79;
  t82 = -t72;
  t86 = t22 * t72 * t27 + t30 * t82 * t32 - t22 * t66 - t30 * t80 + t62 * t66 + t76 * t80;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t20 * t21 * t86 - t50 - 0.2e1 * t52 - t57 - 0.2e1 * t59;

  t90 = t4 * t6 * t44;
  t92 = t4 * t17 * t44;
  t93 = t26 * t65;
  t94 = t93 * t38;
  t100 = t31 * t79;
  t101 = t100 * t41;
  t107 = 0.2e1 * t22 * t70 * t27 - 0.2e1 * t30 * t70 * t32 - t30 * t101 + t76 * t101 - t22 * t94 + t62 * t94;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -t20 * t21 * t107 - t50 - t52 - t57 - t59 - t90 - t92;

  t112 = t38 * t38;
  t113 = t112 * t65;
  t116 = 0.2e1 * t24 + 0.2e1 * t70;
  t120 = t41 * t41;
  t121 = t120 * t79;
  t123 = -t116;
  t127 = t22 * t116 * t27 + t30 * t123 * t32 - t22 * t113 + t62 * t113 - t30 * t121 + t76 * t121;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t20 * t21 * t127 - t50 - t57 - 0.2e1 * t90 - 0.2e1 * t92;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t130 = params->b * t24;
  t132 = t47 * t130 * t14;
  t134 = t47 * t48 * t35;
  t137 = t4 * t6 * t86;
  t139 = t54 * params->b;
  t140 = t139 * t24;
  t142 = t47 * t140 * t14;
  t144 = t47 * t55 * t35;
  t147 = t4 * t17 * t86;
  t149 = t61 * t1;
  t150 = t11 * t149;
  t151 = t63 * t26;
  t153 = 0.1e1 / t64 / t10;
  t154 = t151 * t153;
  t156 = t93 * t72;
  t161 = t23 * t23;
  t162 = 0.1e1 / t161;
  t163 = t7 * t162;
  t165 = 0.6e1 * t69 - 0.6e1 * t163;
  t172 = t13 * t149;
  t173 = t77 * t31;
  t175 = 0.1e1 / t78 / t12;
  t176 = t173 * t175;
  t178 = t100 * t82;
  t183 = -t165;
  t190 = t22 * t165 * t27 + t30 * t183 * t32 + t150 * t154 + 0.2e1 * t22 * t154 - 0.3e1 * t62 * t154 - 0.3e1 * t22 * t156 + 0.3e1 * t62 * t156 + t172 * t176 + 0.2e1 * t30 * t176 - 0.3e1 * t76 * t176 - 0.3e1 * t30 * t178 + 0.3e1 * t76 * t178;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t20 * t21 * t190 + t132 - 0.3e1 * t134 - 0.3e1 * t137 - t142 - 0.3e1 * t144 - 0.3e1 * t147;

  t196 = t47 * t48 * t44;
  t199 = 0.2e1 * t4 * t6 * t107;
  t201 = t47 * t55 * t44;
  t204 = 0.2e1 * t4 * t17 * t107;
  t205 = t63 * t153;
  t206 = t205 * t38;
  t208 = t72 * t65;
  t209 = t208 * t38;
  t213 = t62 * t26;
  t214 = t65 * t7;
  t215 = t214 * t69;
  t224 = t22 * t7;
  t225 = t69 * t65;
  t226 = t225 * t26;
  t232 = t77 * t175;
  t233 = t232 * t41;
  t235 = t82 * t79;
  t236 = t235 * t41;
  t240 = t76 * t31;
  t241 = t79 * t7;
  t242 = t241 * t69;
  t251 = t30 * t7;
  t252 = t69 * t79;
  t253 = t252 * t31;
  t259 = -0.6e1 * t22 * t163 * t27 + 0.6e1 * t30 * t163 * t32 + 0.2e1 * t22 * t69 * t27 - 0.2e1 * t30 * t69 * t32 + t150 * t206 + t172 * t233 + 0.2e1 * t22 * t206 - 0.3e1 * t62 * t206 - t22 * t209 + t62 * t209 + 0.4e1 * t213 * t215 - 0.4e1 * t224 * t226 + 0.2e1 * t30 * t233 - 0.3e1 * t76 * t233 - t30 * t236 + t76 * t236 - 0.4e1 * t240 * t242 + 0.4e1 * t251 * t253;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t20 * t21 * t259 + t132 - 0.2e1 * t134 - t137 - t142 - 0.2e1 * t144 - t147 - t196 - t199 - t201 - t204;

  t265 = t4 * t6 * t127;
  t267 = t4 * t17 * t127;
  t268 = t26 * t153;
  t269 = t268 * t112;
  t271 = t62 * t38;
  t276 = t93 * t116;
  t280 = -0.2e1 * t69 - 0.6e1 * t163;
  t284 = t22 * t38;
  t289 = t31 * t175;
  t290 = t289 * t120;
  t292 = t76 * t41;
  t297 = t100 * t123;
  t299 = -t280;
  t303 = t30 * t41;
  t308 = t22 * t280 * t27 + t30 * t299 * t32 + t150 * t269 + t172 * t290 + 0.4e1 * t271 * t215 - 0.4e1 * t284 * t215 + 0.2e1 * t22 * t269 - t22 * t276 - 0.4e1 * t292 * t242 + 0.4e1 * t303 * t242 - 0.3e1 * t62 * t269 + t62 * t276 + 0.2e1 * t30 * t290 - 0.3e1 * t76 * t290 - t30 * t297 + t76 * t297;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t20 * t21 * t308 + t132 - t134 - t142 - t144 - 0.2e1 * t196 - t199 - 0.2e1 * t201 - t204 - t265 - t267;

  t315 = t112 * t38;
  t316 = t315 * t153;
  t318 = t38 * t65;
  t319 = t318 * t116;
  t325 = -0.6e1 * t69 - 0.6e1 * t163;
  t332 = t120 * t41;
  t333 = t332 * t175;
  t335 = t41 * t79;
  t336 = t335 * t123;
  t341 = -t325;
  t348 = t22 * t325 * t27 + t30 * t341 * t32 + t150 * t316 + t172 * t333 + 0.2e1 * t22 * t316 - 0.3e1 * t22 * t319 + 0.2e1 * t30 * t333 - 0.3e1 * t30 * t336 - 0.3e1 * t62 * t316 + 0.3e1 * t62 * t319 - 0.3e1 * t76 * t333 + 0.3e1 * t76 * t336;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t20 * t21 * t348 + t132 - t142 - 0.3e1 * t196 - 0.3e1 * t201 - 0.3e1 * t265 - 0.3e1 * t267;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t353 = t47 * t54 * t69 * t14;
  t357 = 0.2e1 * t47 * params->b * t69 * t14;
  t359 = t47 * t130 * t35;
  t362 = t47 * t48 * t86;
  t365 = t4 * t6 * t190;
  t367 = t54 * t54;
  t370 = t47 * t367 * t69 * t14;
  t374 = 0.2e1 * t47 * t139 * t69 * t14;
  t376 = t47 * t140 * t35;
  t379 = t47 * t55 * t86;
  t382 = t4 * t17 * t190;
  t384 = t205 * t72;
  t387 = t63 * t63;
  t388 = t64 * t64;
  t389 = 0.1e1 / t388;
  t390 = t387 * t389;
  t393 = t72 * t72;
  t394 = t393 * t65;
  t397 = t93 * t165;
  t408 = t232 * t82;
  t411 = t77 * t77;
  t412 = t78 * t78;
  t413 = 0.1e1 / t412;
  t414 = t411 * t413;
  t417 = t82 * t82;
  t418 = t417 * t79;
  t421 = t100 * t183;
  t424 = 0.6e1 * t150 * t384 - 0.6e1 * t150 * t390 + 0.6e1 * t172 * t408 - 0.6e1 * t172 * t414 - 0.6e1 * t22 * t390 - 0.3e1 * t22 * t394 - 0.4e1 * t22 * t397 + 0.11e2 * t62 * t390 + 0.3e1 * t62 * t394 + 0.4e1 * t62 * t397 + 0.3e1 * t76 * t418 + 0.4e1 * t76 * t421;
  t435 = t7 / t161 / t5;
  t437 = -0.24e2 * t162 + 0.24e2 * t435;
  t451 = t61 * t61;
  t452 = t11 * t451;
  t454 = t13 * t451;
  t456 = t22 * t437 * t27 - t30 * t437 * t32 + 0.12e2 * t22 * t384 + 0.12e2 * t30 * t408 - 0.6e1 * t30 * t414 - 0.3e1 * t30 * t418 - 0.4e1 * t30 * t421 - 0.18e2 * t62 * t384 + t452 * t390 - 0.18e2 * t76 * t408 + t454 * t414 + 0.11e2 * t76 * t414;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t353 - t357 + 0.4e1 * t359 - 0.6e1 * t362 - 0.4e1 * t365 - t370 + t374 - 0.4e1 * t376 - 0.6e1 * t379 - 0.4e1 * t382 - t20 * t21 * (t424 + t456);

  t461 = t4 * t17 * t259;
  t464 = t41 * t413 * t173;
  t468 = t165 * t65 * t38;
  t474 = t183 * t79 * t41;
  t480 = t151 * t389 * t38;
  t491 = 0.24e2 * t22 * t435 * t27;
  t502 = 0.24e2 * t30 * t435 * t32;
  t509 = -0.12e2 * t22 * t162 * t27 + 0.12e2 * t30 * t162 * t32 - 0.6e1 * t150 * t480 - 0.6e1 * t172 * t464 - 0.6e1 * t22 * t226 - t22 * t468 - 0.6e1 * t22 * t480 + 0.6e1 * t62 * t226 + 0.6e1 * t30 * t253 - 0.6e1 * t76 * t253 - 0.6e1 * t30 * t464 - t30 * t474 + t452 * t480 + t454 * t464 + 0.11e2 * t76 * t464 + t62 * t468 + t76 * t474 + 0.11e2 * t62 * t480 + t491 - t502;
  t510 = t150 * t26;
  t511 = t153 * t38;
  t516 = t153 * t7;
  t517 = t516 * t69;
  t520 = t62 * t72;
  t521 = t511 * t26;
  t539 = t172 * t31;
  t540 = t175 * t41;
  t545 = t175 * t7;
  t546 = t545 * t69;
  t549 = t76 * t82;
  t550 = t540 * t31;
  t568 = t214 * t162;
  t575 = t241 * t162;
  t582 = 0.3e1 * t510 * t511 * t72 + 0.6e1 * t150 * t63 * t517 - 0.9e1 * t520 * t521 + 0.6e1 * t520 * t215 - 0.18e2 * t62 * t63 * t517 + 0.18e2 * t224 * t162 * t65 * t26 - 0.6e1 * t224 * t225 * t72 + 0.6e1 * t284 * t268 * t72 + 0.3e1 * t539 * t540 * t82 - 0.6e1 * t172 * t77 * t546 - 0.9e1 * t549 * t550 - 0.6e1 * t549 * t242 + 0.18e2 * t76 * t77 * t546 - 0.18e2 * t251 * t162 * t79 * t31 + 0.6e1 * t251 * t252 * t82 + 0.6e1 * t303 * t289 * t82 - 0.18e2 * t213 * t568 + 0.12e2 * t224 * t69 * t153 * t63 + 0.18e2 * t240 * t575 - 0.12e2 * t251 * t69 * t175 * t77;
  t587 = t4 * t6 * t259;
  t590 = t47 * t140 * t44;
  t596 = t47 * t48 * t107;
  t597 = 0.3e1 * t596;
  t599 = t47 * t55 * t107;
  t600 = 0.3e1 * t599;
  t602 = t47 * t130 * t44;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -t382 - 0.3e1 * t461 - t20 * t21 * (t509 + t582) - t365 - 0.3e1 * t587 + t353 - t370 - t590 + 0.3e1 * t359 - 0.3e1 * t362 - 0.3e1 * t376 - 0.3e1 * t379 - t597 - t600 - t357 + t374 + t602;

  t605 = t4 * t17 * t308;
  t608 = t63 * t389 * t112;
  t611 = t318 * t69;
  t616 = t205 * t116;
  t626 = t77 * t413 * t120;
  t629 = t335 * t69;
  t634 = t232 * t123;
  t639 = -0.6e1 * t150 * t608 - 0.6e1 * t172 * t626 - 0.6e1 * t22 * t608 - 0.4e1 * t22 * t611 + 0.2e1 * t22 * t616 + 0.2e1 * t30 * t634 + 0.11e2 * t62 * t608 + 0.4e1 * t62 * t611 - 0.3e1 * t62 * t616 + 0.11e2 * t76 * t626 - 0.4e1 * t76 * t629 - 0.3e1 * t76 * t634;
  t645 = t72 * t153 * t112;
  t647 = t7 * t7;
  t650 = t647 / t161 / t23;
  t651 = t650 * t65;
  t656 = t208 * t116;
  t658 = t93 * t280;
  t669 = t82 * t175 * t120;
  t671 = t150 * t645 + t172 * t669 + 0.2e1 * t22 * t645 - 0.8e1 * t22 * t651 - t22 * t656 - 0.2e1 * t22 * t658 - 0.6e1 * t30 * t626 + 0.4e1 * t30 * t629 - 0.3e1 * t62 * t645 + 0.8e1 * t62 * t651 + t62 * t656 + 0.2e1 * t62 * t658;
  t673 = t650 * t79;
  t678 = t235 * t123;
  t680 = t100 * t299;
  t694 = t150 * t616 + t172 * t634 + 0.2e1 * t30 * t669 - 0.8e1 * t30 * t673 - t30 * t678 - 0.2e1 * t30 * t680 + t452 * t608 + t454 * t626 - 0.3e1 * t76 * t669 + 0.8e1 * t76 * t673 + t76 * t678 + 0.2e1 * t76 * t680;
  t707 = t516 * t69 * t26;
  t716 = t545 * t69 * t31;
  t721 = 0.8e1 * t510 * t511 * t70 - 0.8e1 * t539 * t540 * t70 - 0.12e2 * t271 * t568 - 0.24e2 * t271 * t707 + 0.12e2 * t284 * t568 + 0.16e2 * t284 * t707 + 0.12e2 * t292 * t575 + 0.24e2 * t292 * t716 - 0.12e2 * t303 * t575 - 0.16e2 * t303 * t716 + t491 - t502;
  t728 = t4 * t6 * t308;
  t736 = t47 * t48 * t127;
  t739 = t47 * t55 * t127;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -0.2e1 * t461 - 0.2e1 * t605 - t20 * t21 * (t639 + t671 + t694 + t721) - 0.2e1 * t587 - 0.2e1 * t728 + t353 - t370 - 0.2e1 * t590 + 0.2e1 * t359 - t362 - 0.2e1 * t376 - t379 - 0.4e1 * t596 - 0.4e1 * t599 - t736 - t357 + t374 + 0.2e1 * t602 - t739;

  t747 = t4 * t6 * t348;
  t749 = t4 * t17 * t348;
  t751 = t315 * t389 * t26;
  t754 = t318 * t280;
  t760 = t325 * t65 * t26;
  t767 = t332 * t413 * t31;
  t770 = t335 * t299;
  t776 = t341 * t79 * t31;
  t789 = 0.6e1 * t150 * t112 * t517 - 0.6e1 * t150 * t751 - 0.6e1 * t172 * t767 - 0.6e1 * t22 * t751 - 0.3e1 * t22 * t754 - t22 * t760 - 0.6e1 * t30 * t767 - 0.3e1 * t30 * t770 - t30 * t776 + t452 * t751 + t454 * t767 + 0.11e2 * t62 * t751 + 0.3e1 * t62 * t754 + t62 * t760 + 0.11e2 * t76 * t767 + 0.3e1 * t76 * t770 + t76 * t776;
  t801 = t22 * t116;
  t823 = t30 * t123;
  t839 = 0.12e2 * t162 + 0.24e2 * t435;
  t845 = -0.9e1 * t271 * t153 * t116 * t26 + 0.6e1 * t62 * t7 * t225 * t116 - 0.18e2 * t62 * t112 * t517 + 0.6e1 * t801 * t521 - 0.6e1 * t801 * t215 + 0.12e2 * t22 * t112 * t517 - 0.6e1 * t172 * t120 * t546 - 0.9e1 * t292 * t175 * t123 * t31 - 0.6e1 * t76 * t7 * t252 * t123 + 0.18e2 * t76 * t120 * t546 + 0.6e1 * t823 * t550 + 0.6e1 * t823 * t242 - 0.12e2 * t30 * t120 * t546 + 0.3e1 * t510 * t511 * t116 + 0.3e1 * t539 * t540 * t123 + t22 * t839 * t27 - t30 * t839 * t32;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t353 - t357 + t359 + 0.3e1 * t602 - t597 - 0.3e1 * t736 - 0.3e1 * t728 - t370 + t374 - t376 - 0.3e1 * t590 - t600 - 0.3e1 * t739 - 0.3e1 * t605 - t747 - t749 - t20 * t21 * (t789 + t845);

  t856 = 0.24e2 * t162 + 0.24e2 * t435;
  t863 = t112 * t153 * t116;
  t869 = t120 * t175 * t123;
  t874 = t112 * t112;
  t875 = t874 * t389;
  t877 = t120 * t120;
  t878 = t877 * t413;
  t884 = t116 * t116;
  t885 = t884 * t65;
  t888 = t318 * t325;
  t891 = t22 * t856 * t27 - t30 * t856 * t32 + 0.6e1 * t150 * t863 - 0.6e1 * t150 * t875 + 0.12e2 * t22 * t863 + 0.12e2 * t30 * t869 + t452 * t875 + t454 * t878 - 0.18e2 * t62 * t863 + 0.3e1 * t62 * t885 + 0.4e1 * t62 * t888 - 0.18e2 * t76 * t869;
  t904 = t123 * t123;
  t905 = t904 * t79;
  t908 = t335 * t341;
  t919 = 0.6e1 * t172 * t869 - 0.6e1 * t172 * t878 - 0.6e1 * t22 * t875 - 0.3e1 * t22 * t885 - 0.4e1 * t22 * t888 - 0.6e1 * t30 * t878 - 0.3e1 * t30 * t905 - 0.4e1 * t30 * t908 + 0.11e2 * t62 * t875 + 0.11e2 * t76 * t878 + 0.3e1 * t76 * t905 + 0.4e1 * t76 * t908;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t353 - t357 + 0.4e1 * t602 - 0.6e1 * t736 - 0.4e1 * t747 - t370 + t374 - 0.4e1 * t590 - 0.6e1 * t739 - 0.4e1 * t749 - t20 * t21 * (t891 + t919);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

