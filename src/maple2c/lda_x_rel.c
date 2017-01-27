/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_x_rel.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t3, t4, t5, t6, t10, t13;
  double t14, t16, t20, t21, t25, t26, t27, t31;
  double t35, t38, t41, t45, t46, t54, t60, t63;
  double t76, t79, t84, t89;


  t1 = 0.1e1 / r->rss;
  t2 = r->rss * r->rss;
  t3 = 0.1e1 / t2;
  t4 = 0.19613371278049345815e-3 * t3;
  t5 = 0.10e1 + t4;
  t6 = sqrt(t5);
  t10 = log(0.14004774642260169484e-1 * t1 + sqrt(pow(0.14004774642260169484e-1 * t1, 0.2e1) + 0.1e1));
  t13 = 0.71404219314064903973e2 * t6 * r->rss - 0.50985625358510794657e4 * t10 * t2;
  t14 = t13 * t13;
  t16 = 0.10e1 - 0.15e1 * t14;
  r->zk = 0.91633058656628578694e0 * t1 * t16;

  if(r->order < 1) return;

  t20 = t1 * t13;
  t21 = 0.1e1 / t6;
  t25 = t4 + 0.1e1;
  t26 = sqrt(t25);
  t27 = 0.1e1 / t26;
  t31 = -0.14004774642260169484e-1 * t21 * t3 + 0.71404219314064903973e2 * t6 + 0.71404219314064903974e2 * t27 - 0.10197125071702158931e5 * t10 * r->rss;
  r->dedrs = -0.91633058656628578694e0 * t3 * t16 - 0.27489917596988573608e1 * t20 * t31;
  r->dedz = 0;

  if(r->order < 2) return;

  t35 = 0.1e1 / t2 / r->rss;
  t38 = t3 * t13;
  t41 = t31 * t31;
  t45 = 0.1e1 / t6 / t5;
  t46 = t2 * t2;
  t54 = 0.1e1 / t26 / t25;
  t60 = -0.27468084472405941018e-5 * t45 / t46 / r->rss + 0.14004774642260169484e-1 * t21 * t35 + 0.14004774642260169484e-1 * t54 * t35 + 0.14280843862812980794e3 * t1 * t27 - 0.10197125071702158931e5 * t10;
  r->d2edrs2 = 0.18326611731325715739e1 * t35 * t16 + 0.54979835193977147216e1 * t38 * t31 - 0.27489917596988573608e1 * t1 * t41 - 0.27489917596988573608e1 * t20 * t60;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t63 = 0.1e1 / t46;
  t76 = t5 * t5;
  t79 = t46 * t46;
  t84 = 0.1e1 / t46 / t2;
  t89 = t25 * t25;
  r->d3edrs3 = -0.54979835193977147217e1 * t63 * t16 - 0.16493950558193144165e2 * t35 * t13 * t31 + 0.82469752790965720824e1 * t3 * t41 + 0.82469752790965720824e1 * t38 * t60 - 0.82469752790965720824e1 * t1 * t31 * t60 - 0.27489917596988573608e1 * t20 * (-0.16162252171623597064e-8 / t6 / t76 / t79 + 0.16480850683443564611e-4 * t45 * t84 - 0.42014323926780508452e-1 * t21 * t63 + 0.82404253417217823054e-5 / t26 / t89 * t84 - 0.14004774642260169485e-1 * t54 * t63);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t16, t19, t20, t22;
  double t24, t27, t31, t32, t33, t37, t38, t41;
  double t43, t45, t46, t49, t50, t55, t59, t60;
  double t68, t74, t75, t78, t80, t82, t83, t85;
  double t90, t103, t106, t111, t116, t127, t129;


  t1 = 0.10e1 + r->zeta;
  t2 = pow(t1, 0.13333333333333333333e1);
  t3 = 0.10e1 - r->zeta;
  t4 = pow(t3, 0.13333333333333333333e1);
  t5 = t2 + t4;
  t6 = 0.1e1 / r->rss;
  t7 = t5 * t6;
  t8 = r->rss * r->rss;
  t9 = 0.1e1 / t8;
  t10 = 0.19613371278049345815e-3 * t9;
  t11 = 0.10e1 + t10;
  t12 = sqrt(t11);
  t16 = log(0.14004774642260169484e-1 * t6 + sqrt(pow(0.14004774642260169484e-1 * t6, 0.2e1) + 0.1e1));
  t19 = 0.71404219314064903973e2 * t12 * r->rss - 0.50985625358510794657e4 * t16 * t8;
  t20 = t19 * t19;
  t22 = 0.10e1 - 0.15e1 * t20;
  r->zk = 0.45816529328314289347e0 * t7 * t22;

  if(r->order < 1) return;

  t24 = t5 * t9;
  t27 = 0.1e1 / t12;
  t31 = t10 + 0.1e1;
  t32 = sqrt(t31);
  t33 = 0.1e1 / t32;
  t37 = -0.14004774642260169484e-1 * t27 * t9 + 0.71404219314064903973e2 * t12 + 0.71404219314064903974e2 * t33 - 0.10197125071702158931e5 * t16 * r->rss;
  t38 = t19 * t37;
  r->dedrs = -0.45816529328314289347e0 * t24 * t22 - 0.13744958798494286804e1 * t7 * t38;
  t41 = pow(t1, 0.3333333333333333333e0);
  t43 = pow(t3, 0.3333333333333333333e0);
  t45 = 0.13333333333333333333e1 * t41 - 0.13333333333333333333e1 * t43;
  t46 = t45 * t6;
  r->dedz = 0.45816529328314289347e0 * t46 * t22;

  if(r->order < 2) return;

  t49 = 0.1e1 / t8 / r->rss;
  t50 = t5 * t49;
  t55 = t37 * t37;
  t59 = 0.1e1 / t12 / t11;
  t60 = t8 * t8;
  t68 = 0.1e1 / t32 / t31;
  t74 = -0.27468084472405941018e-5 * t59 / t60 / r->rss + 0.14004774642260169484e-1 * t27 * t49 + 0.14004774642260169484e-1 * t68 * t49 + 0.14280843862812980794e3 * t6 * t33 - 0.10197125071702158931e5 * t16;
  t75 = t19 * t74;
  r->d2edrs2 = 0.91633058656628578694e0 * t50 * t22 + 0.27489917596988573608e1 * t24 * t38 - 0.13744958798494286804e1 * t7 * t55 - 0.13744958798494286804e1 * t7 * t75;
  t78 = pow(t1, -0.6666666666666666667e0);
  t80 = pow(t3, -0.6666666666666666667e0);
  t82 = 0.44444444444444444439e0 * t78 + 0.44444444444444444439e0 * t80;
  t83 = t82 * t6;
  r->d2edz2 = 0.45816529328314289347e0 * t83 * t22;
  t85 = t45 * t9;
  r->d2edrsz = -0.45816529328314289347e0 * t85 * t22 - 0.13744958798494286804e1 * t46 * t38;

  if(r->order < 3) return;

  t90 = 0.1e1 / t60;
  t103 = t11 * t11;
  t106 = t60 * t60;
  t111 = 0.1e1 / t60 / t8;
  t116 = t31 * t31;
  r->d3edrs3 = -0.27489917596988573608e1 * t5 * t90 * t22 - 0.82469752790965720824e1 * t50 * t38 + 0.41234876395482860412e1 * t24 * t55 + 0.41234876395482860412e1 * t24 * t75 - 0.41234876395482860412e1 * t7 * t37 * t74 - 0.13744958798494286804e1 * t7 * t19 * (-0.16162252171623597064e-8 / t12 / t103 / t106 + 0.16480850683443564611e-4 * t59 * t111 - 0.42014323926780508452e-1 * t27 * t90 + 0.82404253417217823054e-5 / t32 / t116 * t111 - 0.14004774642260169485e-1 * t68 * t90);
  t127 = pow(t1, -0.16666666666666666667e1);
  t129 = pow(t3, -0.16666666666666666667e1);
  r->d3edz3 = 0.45816529328314289347e0 * (-0.29629629629629629627e0 * t127 + 0.29629629629629629627e0 * t129) * t6 * t22;
  r->d3edrs2z = 0.91633058656628578694e0 * t45 * t49 * t22 + 0.27489917596988573608e1 * t85 * t38 - 0.13744958798494286804e1 * t46 * t55 - 0.13744958798494286804e1 * t46 * t75;
  r->d3edrsz2 = -0.45816529328314289347e0 * t82 * t9 * t22 - 0.13744958798494286804e1 * t83 * t38;

  if(r->order < 4) return;


}

void 
XC(lda_x_rel_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_x_rel_func)