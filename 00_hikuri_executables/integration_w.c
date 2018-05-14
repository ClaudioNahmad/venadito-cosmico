/***********************************************/
/* Claudio Nahmad			       */
/* Numerical Integration of an equation        */
/*                           of state w(a)     */
/*                                             */
/* Version 0.01: 2018-may-08                   */
/***********************************************/
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_integration.h>
 
#define LIMIT_SIZE 1000
 
/* 0. CONSTANTS ---------------------------------- */
/*
#define w0_fld -0.9
#define wa_fld -0.6
*/

double w0_fld = -0.815;
double wa_fld = 0.3263;
double a = 0.8;
double a_trans = 0.9;
double q_factor = 1;

/* 1. INTEGRANT ---------------------------------- */

/* w(a) 
int a_function(
           double a,
           double a_trans,
           double a_func)
{
  a_func = (1.- a / a)*(a_trans / (1. - a_trans));
  return 0;
}*/


/*w_fld*/
int main(void)
{		
  double w_fld;
  double a_func = ((1. - a)/a)*(a_trans/(1. - a_trans));
  /*w_fld = wa_fld * ((pow((1. - a / a)*(a_trans / (1. - a_trans)), q_factor)) / (1. + pow((1. - a / a)*(a_trans / (1. - a_trans)), q_factor)));*/
  w_fld = w0_fld + wa_fld * ((pow(a_func, q_factor)) / (1. + pow(a_func, q_factor)));
  /*w_fld = w0_fld + wa_fld * (pow((1. - a / a) * (a_trans / (1. - a_trans)), q_factor) /
                             (1. + pow((1. - a / a) * (a_trans / (1. - a_trans)), q_factor)));*/
  printf ("a_func          = %.6f\n", a_func);
  printf ("result          = %.6f\n", w_fld);

  return 0;
}


/**************************************************************************************************************************/
