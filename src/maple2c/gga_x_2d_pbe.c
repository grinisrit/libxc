/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_x_2d_pbe.mpl
  Type of functional: work_gga_x
*/

void XC(gga_x_2d_pbe_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t3, t6, t7, t10, t14;


  t1 = x * x;
  t3 = 0.4604e0 + 0.70534859642542911408e-2 * t1;
  *f = 0.146040e1 - 0.21196816e0 / t3;

  if(order < 1) return;

  t6 = t3 * t3;
  t7 = 0.1e1 / t6;
  *dfdx = 0.29902288828576157305e-2 * t7 * x;

  if(order < 2) return;

  t10 = 0.1e1 / t6 / t3;
  *d2fdx2 = -0.84366149820575925920e-4 * t10 * t1 + 0.29902288828576157305e-2 * t7;

  if(order < 3) return;

  t14 = t6 * t6;
  *d3fdx3 = 0.35704527217056418582e-5 / t14 * t1 * x - 0.25309844946172777776e-3 * t10 * x;

  if(order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  XC(gga_x_2d_pbe_enhance)
