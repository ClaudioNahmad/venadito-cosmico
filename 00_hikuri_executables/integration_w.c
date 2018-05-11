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
 
/* 1. INTEGRANT ---------------------------------- */

/* w(a) */
int a_function(
           double a,
           double a_trans,
           double a_func)
{
  a_func = (1.- a / a)*(a_trans / (1. - a_trans));
  return 0;
}


/*w_fld*/
int background_w_fld(
                     double a,
                     double q_factor,			
                     double w_fld)
{
  /** local variables */
  double a_func;
 
  w_fld = w0_fld + wa_fld * ((pow(a_func, q_factor)) / (1. + pow(a_func, q_factor)));
  
  return 0;
}

/**************************************************************************************************************************/
