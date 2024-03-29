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
double q_factor = 3;

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
int func(double a, void * params)
{		
  
  double a_func = ((1. - a)/a)*(a_trans/(1. - a_trans));
  double func = w0_fld + wa_fld * ((pow(a_func, q_factor)) / (1. + pow(a_func, q_factor)));
  
  /*printf ("a_func          = %.6f\n", a_func);
  printf ("result          = %.6f\n", w_fld);*/

  return func;
}

/* 2. INTEGRAL ---------------------------------- */

/* int_{a}^{a0} da 3(1+w_{fld})/a */

int main(void)
{
    gsl_function f;
    gsl_integration_workspace *workspace;
    double inf, sup, ret, ret_abserr;
 
    /* set integration interval and integrant */
    inf = 0.8;
    sup = 1;
    f.function = &func;
    f.params = &a;
 
    /* Define type of Interpolation */
    workspace = gsl_integration_workspace_alloc(LIMIT_SIZE);
 
    /* QAG adaptive integraion */
    gsl_integration_qag(&f, inf, sup, 1.0e-20, 1.0e-10, LIMIT_SIZE, GSL_INTEG_GAUSS41, workspace, &ret, &ret_abserr);
 
    /* print */
    printf("QAG (exact_abserr, returned abserr): %25.17e (%10.3e, %10.3e)\n", ret, fabs(ret - 2.0), ret_abserr);
 
    /* free */
    gsl_integration_workspace_free(workspace);
 
    return 0;
}

/**************************************************************************************************************************/
