/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_1d_loos.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t2, t3, t4, t5, t6, t7, t8, t9;
  double t10, t12, t13, t20, t22, t25, t27, t28;
  double t29, t32, t35, t38, t45, t48, t57, t58;
  double t61, t64, t65, t68, t71, t75, t76, t79;
  double t86, t95, t98, t102, t103, t106, t109, t131;
  double t136, t139, t140, t141, t144, t149, t163, t167;
  double t182, t184, t186, t189, t225, t262;


  t2 = 0.10e1 + 0.123320e1 * r->rss;
  t3 = sqrt(t2);
  t4 = t3 - 0.10e1;
  t5 = t4 * t4;
  t6 = r->rss * r->rss;
  t7 = 0.1e1 / t6;
  t8 = t5 * t7;
  t9 = 0.1e1 / r->rss;
  t10 = t4 * t9;
  t12 = 0.10e1 - 0.16217969510217320791e1 * t10;
  t13 = t12 * t12;
  t20 = t5 * t4;
  t22 = 0.1e1 / t6 / r->rss;
  t25 = -0.51453374978700060630e0 * t13 * t12 - 0.32379510825613508969e1 * t10 * t13 - 0.29963153289698737043e0 * t8 * t12 + 0.30457036979324974348e-1 * t20 * t22;
  r->zk = 0.26302253503433864402e1 * t8 * t25;

  if(r->order < 1) return;

  t27 = t4 * t7;
  t28 = 0.1e1 / t3;
  t29 = t25 * t28;
  t32 = t5 * t22;
  t35 = t28 * t9;
  t38 = -0.99999999999999999997e0 * t35 + 0.16217969510217320791e1 * t27;
  t45 = t12 * t38;
  t48 = t12 * t28;
  t57 = t6 * t6;
  t58 = 0.1e1 / t57;
  t61 = -0.15436012493610018189e1 * t13 * t38 - 0.19965206375073289630e1 * t35 * t13 + 0.32379510825613508969e1 * t27 * t13 - 0.64759021651227017938e1 * t10 * t45 - 0.36950560636856482521e0 * t27 * t48 + 0.59926306579397474086e0 * t32 * t12 - 0.29963153289698737043e0 * t8 * t38 + 0.56339427004355337549e-1 * t32 * t28 - 0.91371110937974923044e-1 * t20 * t58;
  r->dedrs = 0.32435939020434641581e1 * t27 * t29 - 0.52604507006867728804e1 * t32 * t25 + 0.26302253503433864402e1 * t8 * t61;
  r->dedz = 0;

  if(r->order < 2) return;

  t64 = 0.1e1 / t2;
  t65 = t64 * t7;
  t68 = t4 * t22;
  t71 = t61 * t28;
  t75 = 0.1e1 / t3 / t2;
  t76 = t25 * t75;
  t79 = t5 * t58;
  t86 = t28 * t7;
  t95 = t38 * t38;
  t98 = t75 * t9;
  t102 = 0.61659999999999999998e0 * t98 + 0.19999999999999999999e1 * t86 - 0.32435939020434641582e1 * t68;
  t103 = t12 * t102;
  t106 = t38 * t28;
  t109 = t12 * t75;
  t131 = 0.1e1 / t57 / r->rss;
  t136 = 0.14780224254742593008e1 * t68 * t48 + 0.39930412750146579260e1 * t86 * t13 - 0.79860825500293158521e1 * t35 * t45 - 0.64759021651227017938e1 * t68 * t13 + 0.12951804330245403588e2 * t27 * t45 - 0.64759021651227017938e1 * t10 * t95 - 0.64759021651227017938e1 * t10 * t103 - 0.73901121273712965042e0 * t27 * t106 + 0.22783715688685707122e0 * t27 * t109 - 0.17977891973819242226e1 * t79 * t12 - 0.33803656202613202530e0 * t79 * t28 - 0.30872024987220036378e1 * t12 * t95 + 0.12310546250870190386e1 * t98 * t13 - 0.22783715688685707122e0 * t65 * t12 + 0.11985261315879494817e1 * t32 * t38 - 0.29963153289698737043e0 * t8 * t102 + 0.69477781381771002265e-1 * t68 * t64 - 0.34738890690885501133e-1 * t32 * t75 + 0.36548444375189969218e0 * t20 * t131 - 0.15436012493610018189e1 * t13 * t102;
  r->d2edrs2 = 0.19999999999999999999e1 * t65 * t25 - 0.12974375608173856632e2 * t68 * t29 + 0.64871878040869283162e1 * t27 * t71 - 0.19999999999999999999e1 * t27 * t76 + 0.15781352102060318641e2 * t79 * t25 - 0.10520901401373545761e2 * t32 * t61 + 0.26302253503433864402e1 * t8 * t136;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t139 = t2 * t2;
  t140 = 0.1e1 / t139;
  t141 = t140 * t7;
  t144 = t64 * t22;
  t149 = t4 * t58;
  t163 = 0.1e1 / t3 / t139;
  t167 = t5 * t131;
  t182 = t163 * t9;
  t184 = t75 * t7;
  t186 = t28 * t22;
  t189 = -0.11405866800000000000e1 * t182 - 0.18497999999999999999e1 * t184 - 0.59999999999999999997e1 * t186 + 0.97307817061303924746e1 * t149;
  t225 = -0.30872024987220036378e1 * t95 * t38 - 0.18274222187594984609e1 * t20 / t57 / t6 + 0.42839999999999999997e-1 * t75 * t22 - 0.15436012493610018189e1 * t13 * t189 - 0.66511009146341668537e1 * t149 * t48 + 0.44340672764227779024e1 * t68 * t106 - 0.13670229413211424273e1 * t68 * t109 + 0.23958247650087947556e2 * t86 * t45 - 0.11979123825043973778e2 * t35 * t103 + 0.73863277505221142316e1 * t98 * t45 - 0.38855412990736210764e2 * t68 * t45 + 0.19427706495368105382e2 * t27 * t103 - 0.19427706495368105382e2 * t10 * t38 * t102 - 0.64759021651227017938e1 * t10 * t12 * t189 - 0.11085168191056944756e1 * t27 * t102 * t28 + 0.68351147066057121367e0 * t27 * t38 * t75 - 0.42145317280930821034e0 * t27 * t12 * t163 + 0.71911567895276968904e1 * t167 * t12;
  t262 = 0.20282193721567921518e1 * t167 * t28 + 0.13670229413211424273e1 * t144 * t12 - 0.36931638752610571158e1 * t184 * t13 - 0.68351147066057121367e0 * t65 * t38 + 0.42145317280930821034e0 * t141 * t12 - 0.53933675921457726677e1 * t79 * t38 - 0.62530003243593902040e0 * t149 * t64 + 0.31265001621796951020e0 * t79 * t75 - 0.92616074961660109134e1 * t45 * t102 - 0.22772048454859678176e1 * t182 * t13 + 0.17977891973819242226e1 * t32 * t102 - 0.29963153289698737043e0 * t8 * t189 - 0.12851999999999999999e0 * t68 * t140 + 0.64259999999999999996e-1 * t32 * t163 - 0.11979123825043973778e2 * t186 * t13 - 0.11979123825043973778e2 * t35 * t95 + 0.19427706495368105381e2 * t149 * t13 + 0.19427706495368105382e2 * t27 * t95;
  r->d3edrs3 = -0.36995999999999999998e1 * t141 * t25 - 0.11999999999999999999e2 * t144 * t25 + 0.59999999999999999997e1 * t65 * t61 + 0.58384690236782354844e2 * t149 * t29 - 0.38923126824521569896e2 * t68 * t71 + 0.11999999999999999999e2 * t68 * t76 + 0.97307817061303924743e1 * t27 * t136 * t28 - 0.59999999999999999997e1 * t27 * t61 * t75 + 0.36995999999999999998e1 * t27 * t25 * t163 - 0.63125408408241274564e2 * t167 * t25 + 0.47344056306180955924e2 * t79 * t61 - 0.15781352102060318641e2 * t32 * t136 + 0.26302253503433864402e1 * t8 * (t225 + t262);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t2, t3, t4, t5, t6, t7, t8, t9;
  double t10, t12, t13, t20, t22, t25, t27, t28;
  double t29, t32, t35, t38, t45, t48, t57, t58;
  double t61, t64, t65, t68, t71, t75, t76, t79;
  double t86, t95, t98, t102, t103, t106, t109, t131;
  double t136, t139, t140, t141, t144, t149, t163, t167;
  double t182, t184, t186, t189, t225, t262;


  t2 = 0.10e1 + 0.123320e1 * r->rss;
  t3 = sqrt(t2);
  t4 = t3 - 0.10e1;
  t5 = t4 * t4;
  t6 = r->rss * r->rss;
  t7 = 0.1e1 / t6;
  t8 = t5 * t7;
  t9 = 0.1e1 / r->rss;
  t10 = t4 * t9;
  t12 = 0.10e1 - 0.16217969510217320791e1 * t10;
  t13 = t12 * t12;
  t20 = t5 * t4;
  t22 = 0.1e1 / t6 / r->rss;
  t25 = -0.51453374978700060630e0 * t13 * t12 - 0.32379510825613508969e1 * t10 * t13 - 0.29963153289698737043e0 * t8 * t12 + 0.30457036979324974348e-1 * t20 * t22;
  r->zk = 0.26302253503433864402e1 * t8 * t25;

  if(r->order < 1) return;

  t27 = t4 * t7;
  t28 = 0.1e1 / t3;
  t29 = t25 * t28;
  t32 = t5 * t22;
  t35 = t28 * t9;
  t38 = -0.99999999999999999997e0 * t35 + 0.16217969510217320791e1 * t27;
  t45 = t12 * t38;
  t48 = t12 * t28;
  t57 = t6 * t6;
  t58 = 0.1e1 / t57;
  t61 = -0.15436012493610018189e1 * t13 * t38 - 0.19965206375073289630e1 * t35 * t13 + 0.32379510825613508969e1 * t27 * t13 - 0.64759021651227017938e1 * t10 * t45 - 0.36950560636856482521e0 * t27 * t48 + 0.59926306579397474086e0 * t32 * t12 - 0.29963153289698737043e0 * t8 * t38 + 0.56339427004355337549e-1 * t32 * t28 - 0.91371110937974923044e-1 * t20 * t58;
  r->dedrs = 0.32435939020434641581e1 * t27 * t29 - 0.52604507006867728804e1 * t32 * t25 + 0.26302253503433864402e1 * t8 * t61;
  r->dedz = 0;

  if(r->order < 2) return;

  t64 = 0.1e1 / t2;
  t65 = t64 * t7;
  t68 = t4 * t22;
  t71 = t61 * t28;
  t75 = 0.1e1 / t3 / t2;
  t76 = t25 * t75;
  t79 = t5 * t58;
  t86 = t28 * t7;
  t95 = t38 * t38;
  t98 = t75 * t9;
  t102 = 0.61659999999999999998e0 * t98 + 0.19999999999999999999e1 * t86 - 0.32435939020434641582e1 * t68;
  t103 = t12 * t102;
  t106 = t38 * t28;
  t109 = t12 * t75;
  t131 = 0.1e1 / t57 / r->rss;
  t136 = 0.14780224254742593008e1 * t68 * t48 + 0.39930412750146579260e1 * t86 * t13 - 0.79860825500293158521e1 * t35 * t45 - 0.64759021651227017938e1 * t68 * t13 + 0.12951804330245403588e2 * t27 * t45 - 0.64759021651227017938e1 * t10 * t95 - 0.64759021651227017938e1 * t10 * t103 - 0.73901121273712965042e0 * t27 * t106 + 0.22783715688685707122e0 * t27 * t109 - 0.17977891973819242226e1 * t79 * t12 - 0.33803656202613202530e0 * t79 * t28 - 0.30872024987220036378e1 * t12 * t95 + 0.12310546250870190386e1 * t98 * t13 - 0.22783715688685707122e0 * t65 * t12 + 0.11985261315879494817e1 * t32 * t38 - 0.29963153289698737043e0 * t8 * t102 + 0.69477781381771002265e-1 * t68 * t64 - 0.34738890690885501133e-1 * t32 * t75 + 0.36548444375189969218e0 * t20 * t131 - 0.15436012493610018189e1 * t13 * t102;
  r->d2edrs2 = 0.19999999999999999999e1 * t65 * t25 - 0.12974375608173856632e2 * t68 * t29 + 0.64871878040869283162e1 * t27 * t71 - 0.19999999999999999999e1 * t27 * t76 + 0.15781352102060318641e2 * t79 * t25 - 0.10520901401373545761e2 * t32 * t61 + 0.26302253503433864402e1 * t8 * t136;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t139 = t2 * t2;
  t140 = 0.1e1 / t139;
  t141 = t140 * t7;
  t144 = t64 * t22;
  t149 = t4 * t58;
  t163 = 0.1e1 / t3 / t139;
  t167 = t5 * t131;
  t182 = t163 * t9;
  t184 = t75 * t7;
  t186 = t28 * t22;
  t189 = -0.11405866800000000000e1 * t182 - 0.18497999999999999999e1 * t184 - 0.59999999999999999997e1 * t186 + 0.97307817061303924746e1 * t149;
  t225 = -0.30872024987220036378e1 * t95 * t38 - 0.18274222187594984609e1 * t20 / t57 / t6 + 0.42839999999999999997e-1 * t75 * t22 - 0.15436012493610018189e1 * t13 * t189 - 0.66511009146341668537e1 * t149 * t48 + 0.44340672764227779024e1 * t68 * t106 - 0.13670229413211424273e1 * t68 * t109 + 0.23958247650087947556e2 * t86 * t45 - 0.11979123825043973778e2 * t35 * t103 + 0.73863277505221142316e1 * t98 * t45 - 0.38855412990736210764e2 * t68 * t45 + 0.19427706495368105382e2 * t27 * t103 - 0.19427706495368105382e2 * t10 * t38 * t102 - 0.64759021651227017938e1 * t10 * t12 * t189 - 0.11085168191056944756e1 * t27 * t102 * t28 + 0.68351147066057121367e0 * t27 * t38 * t75 - 0.42145317280930821034e0 * t27 * t12 * t163 - 0.29963153289698737043e0 * t8 * t189;
  t262 = -0.12851999999999999999e0 * t68 * t140 + 0.64259999999999999996e-1 * t32 * t163 + 0.19427706495368105381e2 * t149 * t13 + 0.19427706495368105382e2 * t27 * t95 + 0.71911567895276968904e1 * t167 * t12 + 0.20282193721567921518e1 * t167 * t28 + 0.13670229413211424273e1 * t144 * t12 - 0.36931638752610571158e1 * t184 * t13 - 0.68351147066057121367e0 * t65 * t38 + 0.42145317280930821034e0 * t141 * t12 - 0.53933675921457726677e1 * t79 * t38 - 0.62530003243593902040e0 * t149 * t64 + 0.31265001621796951020e0 * t79 * t75 - 0.92616074961660109134e1 * t45 * t102 - 0.22772048454859678176e1 * t182 * t13 + 0.17977891973819242226e1 * t32 * t102 - 0.11979123825043973778e2 * t186 * t13 - 0.11979123825043973778e2 * t35 * t95;
  r->d3edrs3 = -0.36995999999999999998e1 * t141 * t25 - 0.11999999999999999999e2 * t144 * t25 + 0.59999999999999999997e1 * t65 * t61 + 0.58384690236782354844e2 * t149 * t29 - 0.38923126824521569896e2 * t68 * t71 + 0.11999999999999999999e2 * t68 * t76 + 0.97307817061303924743e1 * t27 * t136 * t28 - 0.59999999999999999997e1 * t27 * t61 * t75 + 0.36995999999999999998e1 * t27 * t25 * t163 - 0.63125408408241274564e2 * t167 * t25 + 0.47344056306180955924e2 * t79 * t61 - 0.15781352102060318641e2 * t32 * t136 + 0.26302253503433864402e1 * t8 * (t225 + t262);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

void 
XC(lda_c_1d_loos_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_1d_loos_func)
