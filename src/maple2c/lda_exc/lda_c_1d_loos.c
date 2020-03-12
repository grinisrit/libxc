/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_1d_loos.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t12, t14, t15, t17, t18, t22, t23;
  double t29, t30, t33, t34;

#ifndef XC_DONT_COMPILE_VXC
  double t36, t37, t40, t41, t45, t48, t58, t61;
  double t70;

#ifndef XC_DONT_COMPILE_FXC
  double t73, t80, t81, t84, t87, t89, t97, t101;
  double t106, t109, t110, t113, t120, t126, t129, t136;
  double t145;

#ifndef XC_DONT_COMPILE_KXC
  double t150, t163, t164, t165, t176, t178, t191, t192;
  double t193, t196, t207, t210, t215, t224, t228, t235;
  double t243, t247, t248, t251, t252, t257, t263, t264;

#ifndef XC_DONT_COMPILE_LXC
  double t282, t283, t284, t307, t308, t319, t325, t335;
  double t339, t343, t384, t397;
#endif

#endif

#endif

#endif

#endif



  t1 = 0.1e1 / rho[0];
  t3 = 0.1e1 + 0.61660000000000000000e0 * t1;
  t4 = sqrt(t3);
  t5 = t4 - 0.1e1;
  t6 = t5 * t5;
  t7 = rho[0] * rho[0];
  t8 = t6 * t7;
  t9 = M_SQRT2;
  t10 = sqrt(M_PI);
  t12 = log(t9 * t10);
  t14 = -0.3083e0 * t12 - 0.23122500000000000000e0;
  t15 = t5 * rho[0];
  t17 = 0.1e1 - 0.32435939020434641583e1 * t15;
  t18 = t17 * t17;
  t22 = -0.12332e1 * t12 - 0.86328563835932653793e0;
  t23 = t22 * t5;
  t29 = t6 * t5;
  t30 = t7 * rho[0];
  t33 = t14 * t18 * t17 + 0.32435939020434641583e1 * t23 * rho[0] * t18 - 0.11985261315879494818e1 * t8 * t17 + 0.24365629583459979481e0 * t29 * t30;
  t34 = t8 * t33;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10520901401373545762e2 * t34;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t36 = 0.1e1 / t4;
  t37 = t33 * t36;
  t40 = t30 * t6;
  t41 = t14 * t18;
  t45 = 0.10000000000000000000e1 * t36 * t1 - 0.32435939020434641583e1 * t4 + 0.32435939020434641583e1;
  t48 = t22 * t36;
  t58 = t5 * t17;
  t61 = t6 * rho[0];
  t70 = 0.3e1 * t41 * t45 - 0.10000000000000000000e1 * t48 * t1 * t18 + 0.32435939020434641583e1 * t23 * t18 + 0.64871878040869283166e1 * t23 * rho[0] * t17 * t45 + 0.73901121273712965048e0 * t58 * t36 - 0.23970522631758989636e1 * t61 * t17 - 0.11985261315879494818e1 * t8 * t45 - 0.22535770801742135022e0 * t61 * t36 + 0.73096888750379938443e0 * t29 * t7;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.31562704204120637286e2 * t34 - 0.64871878040869283168e1 * t15 * t37 + 0.10520901401373545762e2 * t40 * t70;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t73 = t5 * t33;
  t80 = 0.1e1 / t3;
  t81 = t1 * t80;
  t84 = t70 * t36;
  t87 = t1 * t5;
  t89 = 0.1e1 / t4 / t3;
  t97 = t45 * t45;
  t101 = 0.1e1 / t7;
  t106 = t14 * t17;
  t109 = 0.1e1 / t30;
  t110 = t89 * t109;
  t113 = t22 * t89;
  t120 = t89 * t101;
  t126 = t5 * t45;
  t129 = t80 * t101;
  t136 = t6 * t1;
  t145 = -0.40000000000000000000e1 * t48 * t1 * t17 * t45 + 0.64871878040869283166e1 * t23 * rho[0] * t97 + 0.20000000000000000000e1 * t23 * t101 * t17 * t89 + 0.6e1 * t106 * t97 + 0.92490000000000000000e0 * t41 * t110 - 0.30830000000000000000e0 * t113 * t109 * t18 + 0.12974375608173856633e2 * t23 * t17 * t45 + 0.22783715688685707124e0 * t58 * t120 + 0.14780224254742593010e1 * t87 * t17 * t36 + 0.14780224254742593010e1 * t126 * t36 - 0.22783715688685707124e0 * t129 * t17 - 0.23970522631758989636e1 * t6 * t17 - 0.47941045263517979272e1 * t61 * t45 - 0.43898338775033582751e0 * t136 * t89 - 0.90143083206968540088e0 * t6 * t36 + 0.13895556276354200455e0 * t87 * t80 + 0.14619377750075987689e1 * t29 * rho[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.25948751216347713268e2 * t73 * t36 + 0.63125408408241274572e2 * t61 * t33 + 0.63125408408241274572e2 * t8 * t70 + 0.20000000000000000001e1 * t81 * t33 - 0.12974375608173856634e2 * t15 * t84 - 0.20000000000000000001e1 * t87 * t33 * t89 + 0.10520901401373545762e2 * t40 * t145;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t150 = t5 * t70;
  t163 = t3 * t3;
  t164 = 0.1e1 / t163;
  t165 = t109 * t164;
  t176 = t109 * t5;
  t178 = 0.1e1 / t4 / t163;
  t191 = t7 * t7;
  t192 = 0.1e1 / t191;
  t193 = t164 * t192;
  t196 = t80 * t109;
  t207 = t6 * t109;
  t210 = t5 * t80;
  t215 = -0.71911567895276968908e1 * t6 * t45 - 0.42840000000000000003e-1 * t110 + 0.6e1 * t14 * t97 * t45 + 0.14619377750075987689e1 * t29 + 0.19461563412260784950e2 * t23 * t97 - 0.21072658640465410519e0 * t193 * t17 - 0.2e-19 * t196 * t17 - 0.68351147066057121374e0 * t129 * t45 + 0.81203147066057121375e0 * t5 * t164 * t109 - 0.13169501632510074826e1 * t6 * t101 * t89 - 0.40601573533028560686e0 * t207 * t178 + 0.41686668829062601363e0 * t210 * t101 - 0.13521462481045281014e1 * t136 * t36;
  t224 = t192 * t17;
  t228 = t45 * t89;
  t235 = t89 * t192;
  t243 = t22 * t164;
  t247 = 0.1e1 / t191 / rho[0];
  t248 = t178 * t247;
  t251 = t22 * t178;
  t252 = t247 * t18;
  t257 = t178 * t192;
  t263 = -0.18498000000000000000e1 * t113 * t109 * t17 * t45 + 0.60000000000000000000e1 * t23 * t101 * t45 * t89 + 0.18498000000000000000e1 * t23 * t224 * t178 + 0.55494000000000000000e1 * t106 * t228 * t109 - 0.60000000000000000000e1 * t48 * t1 * t97 - 0.27747000000000000000e1 * t41 * t235 + 0.92490000000000000000e0 * t113 * t192 * t18 + 0.2e-19 * t58 * t110 - 0.18498000000000000000e1 * t243 * t224 + 0.85544001000000000000e0 * t41 * t248 - 0.28514667000000000000e0 * t251 * t252 + 0.68351147066057121374e0 * t126 * t120 + 0.21072658640465410519e0 * t58 * t257 + 0.44340672764227779029e1 * t87 * t45 * t36;
  t264 = t215 + t263;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.60000000000000000004e1 * t129 * t33 - 0.77846253649043139803e2 * t150 * t36 - 0.60000000000000000004e1 * t73 * t120 - 0.38923126824521569901e2 * t87 * t37 + 0.63125408408241274572e2 * t6 * t33 + 0.18937622522472382371e3 * t61 * t70 + 0.94688112612361911858e2 * t8 * t145 + 0.18498000000000000001e1 * t165 * t33 + 0.60000000000000000004e1 * t81 * t70 - 0.19461563412260784951e2 * t15 * t145 * t36 - 0.60000000000000000004e1 * t87 * t70 * t89 - 0.18498000000000000001e1 * t176 * t33 * t178 + 0.10520901401373545762e2 * t40 * t264;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t282 = t163 * t3;
  t283 = 0.1e1 / t282;
  t284 = t247 * t283;
  t307 = 0.1e1 / t191 / t7;
  t308 = t283 * t307;
  t319 = 0.1e1 / t4 / t282;
  t325 = t247 * t17;
  t335 = t192 * t45;
  t339 = t307 * t17;
  t343 = 0.1e-19 * t235 - 0.50069860480930821040e0 * t248 + 0.84290634561861642074e0 * t164 * t247 * t17 + 0.6e-19 * t80 * t192 * t17 + 0.1e-18 * t207 * t89 + 0.6e-19 * t210 * t109 - 0.84290634561861642078e0 * t193 * t45 + 0.14624730984279246312e1 * t5 * t283 * t247 - 0.32483503294277430315e0 * t308 * t17 + 0.7e-19 * t5 * t192 * t164 - 0.1e-18 * t6 * t192 * t178 - 0.62587325601163526297e0 * t6 * t247 * t319 + 0.73992000000000000000e1 * t113 * t224 * t45 - 0.73992000000000000000e1 * t23 * t325 * t178 - 0.22197600000000000000e2 * t106 * t228 * t192 - 0.22811733600000000000e1 * t251 * t325 * t45 + 0.73992000000000000000e1 * t23 * t335 * t178 + 0.28514667000000000000e1 * t23 * t339 * t319;
  t384 = 0.1e1 / t191 / t30;
  t397 = 0.68435200800000000000e1 * t106 * t45 * t178 * t247 - 0.1e-18 * t48 * t101 * t97 + 0.11098800000000000000e2 * t14 * t97 * t110 + 0.11098800000000000000e2 * t41 * t89 * t247 - 0.36996000000000000000e1 * t113 * t252 - 0.6e-19 * t58 * t235 + 0.73992000000000000000e1 * t243 * t325 - 0.36996000000000000000e1 * t113 * t109 * t97 - 0.73992000000000000000e1 * t243 * t335 - 0.34217600400000000000e1 * t22 * t283 * t339 + 0.18498000000000000000e1 * t23 * t284 + 0.17108800200000000000e1 * t106 * t308 - 0.68435200800000000000e1 * t41 * t178 * t307 + 0.22811733600000000000e1 * t251 * t307 * t18 - 0.84290634561861642074e0 * t58 * t248 + 0.13186607754150000000e1 * t41 * t319 * t384 - 0.43955359180500000000e0 * t22 * t319 * t384 * t18 + 0.84290634561861642078e0 * t126 * t257 + 0.32483503294277430315e0 * t58 * t319 * t307;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.1e-17 * t196 * t33 + 0.1e-17 * t73 * t110 + 0.24000000000000000001e2 * t129 * t70 - 0.15569250729808627961e3 * t5 * t145 * t36 + 0.37875245044944764743e3 * t61 * t145 + 0.12625081681648254914e3 * t8 * t264 + 0.73992000000000000004e1 * t165 * t70 + 0.28514667000000000001e1 * t284 * t33 + 0.12000000000000000001e2 * t81 * t145 + 0.10520901401373545762e2 * t40 * (t343 + t397) + 0.25250163363296509828e3 * t6 * t70 - 0.24000000000000000001e2 * t150 * t120 - 0.1e-18 * t73 * t257 - 0.15569250729808627960e3 * t87 * t84 - 0.25948751216347713268e2 * t15 * t264 * t36 - 0.12000000000000000001e2 * t87 * t145 * t89 - 0.73992000000000000005e1 * t176 * t70 * t178 - 0.28514667000000000002e1 * t247 * t5 * t33 * t319;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t12, t14, t15, t17, t18, t22, t23;
  double t29, t30, t33, t34;

#ifndef XC_DONT_COMPILE_VXC
  double t36, t37, t40, t41, t45, t48, t58, t61;
  double t70;

#ifndef XC_DONT_COMPILE_FXC
  double t73, t80, t81, t84, t87, t89, t97, t101;
  double t106, t109, t110, t113, t120, t126, t129, t136;
  double t145;

#ifndef XC_DONT_COMPILE_KXC
  double t150, t163, t164, t165, t176, t178, t191, t192;
  double t193, t196, t207, t210, t215, t224, t228, t235;
  double t243, t247, t248, t251, t252, t257, t263, t264;

#ifndef XC_DONT_COMPILE_LXC
  double t282, t283, t284, t300, t301, t319, t325, t335;
  double t339, t343, t384, t397;
#endif

#endif

#endif

#endif

#endif



  t1 = 0.1e1 / rho[0];
  t3 = 0.1e1 + 0.61660000000000000000e0 * t1;
  t4 = sqrt(t3);
  t5 = t4 - 0.1e1;
  t6 = t5 * t5;
  t7 = rho[0] * rho[0];
  t8 = t6 * t7;
  t9 = M_SQRT2;
  t10 = sqrt(M_PI);
  t12 = log(t9 * t10);
  t14 = -0.3083e0 * t12 - 0.23122500000000000000e0;
  t15 = t5 * rho[0];
  t17 = 0.1e1 - 0.32435939020434641583e1 * t15;
  t18 = t17 * t17;
  t22 = -0.12332e1 * t12 - 0.86328563835932653793e0;
  t23 = t22 * t5;
  t29 = t6 * t5;
  t30 = t7 * rho[0];
  t33 = t14 * t18 * t17 + 0.32435939020434641583e1 * t23 * rho[0] * t18 - 0.11985261315879494818e1 * t8 * t17 + 0.24365629583459979481e0 * t29 * t30;
  t34 = t8 * t33;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10520901401373545762e2 * t34;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t36 = 0.1e1 / t4;
  t37 = t33 * t36;
  t40 = t30 * t6;
  t41 = t14 * t18;
  t45 = 0.10000000000000000000e1 * t36 * t1 - 0.32435939020434641583e1 * t4 + 0.32435939020434641583e1;
  t48 = t22 * t36;
  t58 = t5 * t17;
  t61 = t6 * rho[0];
  t70 = 0.3e1 * t41 * t45 - 0.10000000000000000000e1 * t48 * t1 * t18 + 0.32435939020434641583e1 * t23 * t18 + 0.64871878040869283166e1 * t23 * rho[0] * t17 * t45 + 0.73901121273712965048e0 * t58 * t36 - 0.23970522631758989636e1 * t61 * t17 - 0.11985261315879494818e1 * t8 * t45 - 0.22535770801742135022e0 * t61 * t36 + 0.73096888750379938443e0 * t29 * t7;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.31562704204120637286e2 * t34 - 0.64871878040869283168e1 * t15 * t37 + 0.10520901401373545762e2 * t40 * t70;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t73 = t5 * t33;
  t80 = 0.1e1 / t3;
  t81 = t1 * t80;
  t84 = t70 * t36;
  t87 = t1 * t5;
  t89 = 0.1e1 / t4 / t3;
  t97 = t45 * t45;
  t101 = 0.1e1 / t7;
  t106 = t14 * t17;
  t109 = 0.1e1 / t30;
  t110 = t89 * t109;
  t113 = t22 * t89;
  t120 = t89 * t101;
  t126 = t5 * t45;
  t129 = t80 * t101;
  t136 = t6 * t1;
  t145 = -0.40000000000000000000e1 * t48 * t1 * t17 * t45 + 0.64871878040869283166e1 * t23 * rho[0] * t97 + 0.20000000000000000000e1 * t23 * t101 * t17 * t89 + 0.6e1 * t106 * t97 + 0.92490000000000000000e0 * t41 * t110 - 0.30830000000000000000e0 * t113 * t109 * t18 + 0.12974375608173856633e2 * t23 * t17 * t45 + 0.22783715688685707124e0 * t58 * t120 + 0.14780224254742593010e1 * t87 * t17 * t36 + 0.14780224254742593010e1 * t126 * t36 - 0.22783715688685707124e0 * t129 * t17 - 0.23970522631758989636e1 * t6 * t17 - 0.47941045263517979272e1 * t61 * t45 - 0.43898338775033582751e0 * t136 * t89 - 0.90143083206968540088e0 * t6 * t36 + 0.13895556276354200455e0 * t87 * t80 + 0.14619377750075987689e1 * t29 * rho[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.25948751216347713268e2 * t73 * t36 + 0.63125408408241274572e2 * t61 * t33 + 0.63125408408241274572e2 * t8 * t70 + 0.20000000000000000001e1 * t81 * t33 - 0.12974375608173856634e2 * t15 * t84 - 0.20000000000000000001e1 * t87 * t33 * t89 + 0.10520901401373545762e2 * t40 * t145;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t150 = t5 * t70;
  t163 = t3 * t3;
  t164 = 0.1e1 / t163;
  t165 = t109 * t164;
  t176 = t109 * t5;
  t178 = 0.1e1 / t4 / t163;
  t191 = t7 * t7;
  t192 = 0.1e1 / t191;
  t193 = t164 * t192;
  t196 = t80 * t109;
  t207 = t6 * t109;
  t210 = t5 * t80;
  t215 = -0.71911567895276968908e1 * t6 * t45 - 0.42840000000000000003e-1 * t110 + 0.6e1 * t14 * t97 * t45 + 0.14619377750075987689e1 * t29 + 0.19461563412260784950e2 * t23 * t97 - 0.21072658640465410519e0 * t193 * t17 - 0.2e-19 * t196 * t17 - 0.68351147066057121374e0 * t129 * t45 + 0.81203147066057121375e0 * t5 * t164 * t109 - 0.13169501632510074826e1 * t6 * t101 * t89 - 0.40601573533028560686e0 * t207 * t178 + 0.41686668829062601363e0 * t210 * t101 - 0.13521462481045281014e1 * t136 * t36;
  t224 = t192 * t17;
  t228 = t45 * t89;
  t235 = t89 * t192;
  t243 = t22 * t164;
  t247 = 0.1e1 / t191 / rho[0];
  t248 = t178 * t247;
  t251 = t22 * t178;
  t252 = t247 * t18;
  t257 = t178 * t192;
  t263 = -0.18498000000000000000e1 * t113 * t109 * t17 * t45 + 0.60000000000000000000e1 * t23 * t101 * t45 * t89 + 0.18498000000000000000e1 * t23 * t224 * t178 + 0.55494000000000000000e1 * t106 * t228 * t109 - 0.60000000000000000000e1 * t48 * t1 * t97 - 0.27747000000000000000e1 * t41 * t235 + 0.92490000000000000000e0 * t113 * t192 * t18 + 0.2e-19 * t58 * t110 - 0.18498000000000000000e1 * t243 * t224 + 0.85544001000000000000e0 * t41 * t248 - 0.28514667000000000000e0 * t251 * t252 + 0.68351147066057121374e0 * t126 * t120 + 0.21072658640465410519e0 * t58 * t257 + 0.44340672764227779029e1 * t87 * t45 * t36;
  t264 = t215 + t263;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.60000000000000000004e1 * t129 * t33 - 0.77846253649043139803e2 * t150 * t36 - 0.60000000000000000004e1 * t73 * t120 - 0.38923126824521569901e2 * t87 * t37 + 0.63125408408241274572e2 * t6 * t33 + 0.18937622522472382371e3 * t61 * t70 + 0.94688112612361911858e2 * t8 * t145 + 0.18498000000000000001e1 * t165 * t33 + 0.60000000000000000004e1 * t81 * t70 - 0.19461563412260784951e2 * t15 * t145 * t36 - 0.60000000000000000004e1 * t87 * t70 * t89 - 0.18498000000000000001e1 * t176 * t33 * t178 + 0.10520901401373545762e2 * t40 * t264;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t282 = t163 * t3;
  t283 = 0.1e1 / t282;
  t284 = t247 * t283;
  t300 = 0.1e1 / t191 / t7;
  t301 = t283 * t300;
  t319 = 0.1e1 / t4 / t282;
  t325 = t247 * t17;
  t335 = t192 * t45;
  t339 = t300 * t17;
  t343 = -0.50069860480930821040e0 * t248 + 0.1e-19 * t235 + 0.84290634561861642074e0 * t164 * t247 * t17 - 0.84290634561861642078e0 * t193 * t45 + 0.14624730984279246312e1 * t5 * t283 * t247 - 0.32483503294277430315e0 * t301 * t17 + 0.6e-19 * t80 * t192 * t17 + 0.1e-18 * t207 * t89 + 0.6e-19 * t210 * t109 + 0.7e-19 * t5 * t192 * t164 - 0.1e-18 * t6 * t192 * t178 - 0.62587325601163526297e0 * t6 * t247 * t319 + 0.73992000000000000000e1 * t113 * t224 * t45 - 0.73992000000000000000e1 * t23 * t325 * t178 - 0.22197600000000000000e2 * t106 * t228 * t192 - 0.22811733600000000000e1 * t251 * t325 * t45 + 0.73992000000000000000e1 * t23 * t335 * t178 + 0.28514667000000000000e1 * t23 * t339 * t319;
  t384 = 0.1e1 / t191 / t30;
  t397 = 0.68435200800000000000e1 * t106 * t45 * t178 * t247 - 0.1e-18 * t48 * t101 * t97 + 0.11098800000000000000e2 * t14 * t97 * t110 + 0.11098800000000000000e2 * t41 * t89 * t247 - 0.36996000000000000000e1 * t113 * t252 - 0.6e-19 * t58 * t235 + 0.73992000000000000000e1 * t243 * t325 - 0.36996000000000000000e1 * t113 * t109 * t97 - 0.73992000000000000000e1 * t243 * t335 - 0.34217600400000000000e1 * t22 * t283 * t339 + 0.18498000000000000000e1 * t23 * t284 + 0.17108800200000000000e1 * t106 * t301 - 0.68435200800000000000e1 * t41 * t178 * t300 + 0.22811733600000000000e1 * t251 * t300 * t18 - 0.84290634561861642074e0 * t58 * t248 + 0.13186607754150000000e1 * t41 * t319 * t384 - 0.43955359180500000000e0 * t22 * t319 * t384 * t18 + 0.84290634561861642078e0 * t126 * t257 + 0.32483503294277430315e0 * t58 * t319 * t300;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.1e-17 * t196 * t33 + 0.1e-17 * t73 * t110 + 0.24000000000000000001e2 * t129 * t70 - 0.15569250729808627961e3 * t5 * t145 * t36 + 0.37875245044944764743e3 * t61 * t145 + 0.12625081681648254914e3 * t8 * t264 + 0.73992000000000000004e1 * t165 * t70 + 0.28514667000000000001e1 * t284 * t33 + 0.12000000000000000001e2 * t81 * t145 + 0.10520901401373545762e2 * t40 * (t343 + t397) + 0.25250163363296509828e3 * t6 * t70 - 0.24000000000000000001e2 * t150 * t120 - 0.1e-18 * t73 * t257 - 0.15569250729808627960e3 * t87 * t84 - 0.25948751216347713268e2 * t15 * t264 * t36 - 0.12000000000000000001e2 * t87 * t145 * t89 - 0.73992000000000000005e1 * t176 * t70 * t178 - 0.28514667000000000002e1 * t247 * t5 * t33 * t319;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t6, t7, t8, t9;
  double t10, t11, t13, t15, t16, t18, t19, t23;
  double t24, t30, t31, t34, t35;

#ifndef XC_DONT_COMPILE_VXC
  double t37, t38, t41, t42, t46, t49, t59, t62;
  double t71;

#ifndef XC_DONT_COMPILE_FXC
  double t74, t81, t82, t85, t88, t90, t98, t102;
  double t107, t110, t111, t114, t121, t127, t130, t137;
  double t146;

#ifndef XC_DONT_COMPILE_KXC
  double t151, t164, t165, t166, t177, t179, t192, t193;
  double t194, t197, t208, t211, t216, t225, t229, t236;
  double t244, t248, t249, t252, t253, t258, t264, t265;

#ifndef XC_DONT_COMPILE_LXC
  double t275, t276, t281, t282, t293, t316, t319, t323;
  double t327, t330, t344, t379;
#endif

#endif

#endif

#endif

#endif



  t1 = rho[0] + rho[1];
  t2 = 0.1e1 / t1;
  t4 = 0.1e1 + 0.61660000000000000000e0 * t2;
  t5 = sqrt(t4);
  t6 = t5 - 0.1e1;
  t7 = t6 * t6;
  t8 = t1 * t1;
  t9 = t7 * t8;
  t10 = M_SQRT2;
  t11 = sqrt(M_PI);
  t13 = log(t10 * t11);
  t15 = -0.3083e0 * t13 - 0.23122500000000000000e0;
  t16 = t6 * t1;
  t18 = 0.1e1 - 0.32435939020434641583e1 * t16;
  t19 = t18 * t18;
  t23 = -0.12332e1 * t13 - 0.86328563835932653793e0;
  t24 = t23 * t6;
  t30 = t7 * t6;
  t31 = t8 * t1;
  t34 = t15 * t19 * t18 + 0.32435939020434641583e1 * t24 * t1 * t19 - 0.11985261315879494818e1 * t9 * t18 + 0.24365629583459979481e0 * t30 * t31;
  t35 = t9 * t34;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10520901401373545762e2 * t35;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t37 = 0.1e1 / t5;
  t38 = t34 * t37;
  t41 = t31 * t7;
  t42 = t15 * t19;
  t46 = 0.10000000000000000000e1 * t37 * t2 - 0.32435939020434641583e1 * t5 + 0.32435939020434641583e1;
  t49 = t23 * t37;
  t59 = t6 * t18;
  t62 = t7 * t1;
  t71 = 0.3e1 * t42 * t46 - 0.10000000000000000000e1 * t49 * t2 * t19 + 0.32435939020434641583e1 * t24 * t19 + 0.64871878040869283166e1 * t24 * t1 * t18 * t46 + 0.73901121273712965048e0 * t59 * t37 - 0.23970522631758989636e1 * t62 * t18 - 0.11985261315879494818e1 * t9 * t46 - 0.22535770801742135022e0 * t62 * t37 + 0.73096888750379938443e0 * t30 * t8;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.31562704204120637286e2 * t35 - 0.64871878040869283168e1 * t16 * t38 + 0.10520901401373545762e2 * t41 * t71;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t74 = t6 * t34;
  t81 = 0.1e1 / t4;
  t82 = t2 * t81;
  t85 = t71 * t37;
  t88 = t2 * t6;
  t90 = 0.1e1 / t5 / t4;
  t98 = t46 * t46;
  t102 = 0.1e1 / t8;
  t107 = t15 * t18;
  t110 = 0.1e1 / t31;
  t111 = t90 * t110;
  t114 = t23 * t90;
  t121 = t90 * t102;
  t127 = t6 * t46;
  t130 = t81 * t102;
  t137 = t7 * t2;
  t146 = -0.40000000000000000000e1 * t49 * t2 * t18 * t46 + 0.64871878040869283166e1 * t24 * t1 * t98 + 0.20000000000000000000e1 * t24 * t102 * t18 * t90 + 0.6e1 * t107 * t98 + 0.92490000000000000000e0 * t42 * t111 - 0.30830000000000000000e0 * t114 * t110 * t19 + 0.12974375608173856633e2 * t24 * t18 * t46 + 0.22783715688685707124e0 * t59 * t121 + 0.14780224254742593010e1 * t88 * t18 * t37 + 0.14780224254742593010e1 * t127 * t37 - 0.22783715688685707124e0 * t130 * t18 - 0.23970522631758989636e1 * t7 * t18 - 0.47941045263517979272e1 * t62 * t46 - 0.43898338775033582751e0 * t137 * t90 - 0.90143083206968540088e0 * t7 * t37 + 0.13895556276354200455e0 * t88 * t81 + 0.14619377750075987689e1 * t30 * t1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.25948751216347713268e2 * t74 * t37 + 0.63125408408241274572e2 * t62 * t34 + 0.63125408408241274572e2 * t9 * t71 + 0.20000000000000000001e1 * t82 * t34 - 0.12974375608173856634e2 * t16 * t85 - 0.20000000000000000001e1 * t88 * t34 * t90 + 0.10520901401373545762e2 * t41 * t146;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t151 = t6 * t71;
  t164 = t4 * t4;
  t165 = 0.1e1 / t164;
  t166 = t110 * t165;
  t177 = t110 * t6;
  t179 = 0.1e1 / t5 / t164;
  t192 = t8 * t8;
  t193 = 0.1e1 / t192;
  t194 = t165 * t193;
  t197 = t81 * t110;
  t208 = t7 * t110;
  t211 = t6 * t81;
  t216 = -0.71911567895276968908e1 * t7 * t46 - 0.42840000000000000003e-1 * t111 + 0.6e1 * t15 * t98 * t46 + 0.14619377750075987689e1 * t30 + 0.19461563412260784950e2 * t24 * t98 - 0.21072658640465410519e0 * t194 * t18 - 0.2e-19 * t197 * t18 - 0.68351147066057121374e0 * t130 * t46 + 0.81203147066057121375e0 * t6 * t165 * t110 - 0.13169501632510074826e1 * t7 * t102 * t90 - 0.40601573533028560686e0 * t208 * t179 + 0.41686668829062601363e0 * t211 * t102 - 0.13521462481045281014e1 * t137 * t37;
  t225 = t193 * t18;
  t229 = t46 * t90;
  t236 = t90 * t193;
  t244 = t23 * t165;
  t248 = 0.1e1 / t192 / t1;
  t249 = t179 * t248;
  t252 = t23 * t179;
  t253 = t248 * t19;
  t258 = t179 * t193;
  t264 = -0.18498000000000000000e1 * t114 * t110 * t18 * t46 + 0.60000000000000000000e1 * t24 * t102 * t46 * t90 + 0.18498000000000000000e1 * t24 * t225 * t179 + 0.55494000000000000000e1 * t107 * t229 * t110 - 0.60000000000000000000e1 * t49 * t2 * t98 - 0.27747000000000000000e1 * t42 * t236 + 0.92490000000000000000e0 * t114 * t193 * t19 + 0.2e-19 * t59 * t111 - 0.18498000000000000000e1 * t244 * t225 + 0.85544001000000000000e0 * t42 * t249 - 0.28514667000000000000e0 * t252 * t253 + 0.68351147066057121374e0 * t127 * t121 + 0.21072658640465410519e0 * t59 * t258 + 0.44340672764227779029e1 * t88 * t46 * t37;
  t265 = t216 + t264;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.60000000000000000004e1 * t130 * t34 - 0.77846253649043139803e2 * t151 * t37 - 0.60000000000000000004e1 * t74 * t121 - 0.38923126824521569901e2 * t88 * t38 + 0.63125408408241274572e2 * t7 * t34 + 0.18937622522472382371e3 * t62 * t71 + 0.94688112612361911858e2 * t9 * t146 + 0.18498000000000000001e1 * t166 * t34 + 0.60000000000000000004e1 * t82 * t71 - 0.19461563412260784951e2 * t16 * t146 * t37 - 0.60000000000000000004e1 * t88 * t71 * t90 - 0.18498000000000000001e1 * t177 * t34 * t179 + 0.10520901401373545762e2 * t41 * t265;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t275 = t164 * t4;
  t276 = 0.1e1 / t275;
  t281 = 0.1e1 / t192 / t8;
  t282 = t276 * t281;
  t293 = 0.1e1 / t5 / t275;
  t316 = t248 * t18;
  t319 = -0.50069860480930821040e0 * t249 + 0.1e-19 * t236 + 0.84290634561861642074e0 * t165 * t248 * t18 - 0.84290634561861642078e0 * t194 * t46 + 0.14624730984279246312e1 * t6 * t276 * t248 - 0.32483503294277430315e0 * t282 * t18 + 0.7e-19 * t6 * t193 * t165 - 0.1e-18 * t7 * t193 * t179 - 0.62587325601163526297e0 * t7 * t248 * t293 + 0.6e-19 * t81 * t193 * t18 + 0.1e-18 * t208 * t90 + 0.6e-19 * t211 * t110 - 0.1e-18 * t49 * t102 * t98 + 0.11098800000000000000e2 * t15 * t98 * t111 + 0.11098800000000000000e2 * t42 * t90 * t248 - 0.36996000000000000000e1 * t114 * t253 - 0.6e-19 * t59 * t236 + 0.73992000000000000000e1 * t244 * t316;
  t323 = t193 * t46;
  t327 = t281 * t18;
  t330 = t248 * t276;
  t344 = 0.1e1 / t192 / t31;
  t379 = -0.36996000000000000000e1 * t114 * t110 * t98 - 0.73992000000000000000e1 * t244 * t323 - 0.34217600400000000000e1 * t23 * t276 * t327 + 0.18498000000000000000e1 * t24 * t330 + 0.17108800200000000000e1 * t107 * t282 - 0.68435200800000000000e1 * t42 * t179 * t281 + 0.22811733600000000000e1 * t252 * t281 * t19 - 0.84290634561861642074e0 * t59 * t249 + 0.13186607754150000000e1 * t42 * t293 * t344 - 0.43955359180500000000e0 * t23 * t293 * t344 * t19 + 0.84290634561861642078e0 * t127 * t258 + 0.32483503294277430315e0 * t59 * t293 * t281 - 0.22811733600000000000e1 * t252 * t316 * t46 + 0.73992000000000000000e1 * t24 * t323 * t179 + 0.28514667000000000000e1 * t24 * t327 * t293 + 0.68435200800000000000e1 * t107 * t46 * t179 * t248 + 0.73992000000000000000e1 * t114 * t225 * t46 - 0.73992000000000000000e1 * t24 * t316 * t179 - 0.22197600000000000000e2 * t107 * t229 * t193;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.10520901401373545762e2 * t41 * (t319 + t379) + 0.1e-17 * t74 * t111 + 0.24000000000000000001e2 * t130 * t71 - 0.15569250729808627961e3 * t6 * t146 * t37 + 0.37875245044944764743e3 * t62 * t146 + 0.12625081681648254914e3 * t9 * t265 + 0.73992000000000000004e1 * t166 * t71 + 0.28514667000000000001e1 * t330 * t34 + 0.12000000000000000001e2 * t82 * t146 - 0.1e-17 * t197 * t34 - 0.24000000000000000001e2 * t151 * t121 - 0.1e-18 * t74 * t258 - 0.15569250729808627960e3 * t88 * t85 - 0.25948751216347713268e2 * t16 * t265 * t37 - 0.12000000000000000001e2 * t88 * t146 * t90 - 0.73992000000000000005e1 * t177 * t71 * t179 - 0.28514667000000000002e1 * t248 * t6 * t34 * t293 + 0.25250163363296509828e3 * t7 * t71;

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

