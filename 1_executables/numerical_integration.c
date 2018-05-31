/***********************************************/
/* T.Kouya's GSL sample program collection     */
/*                       Numerical Integration */
/*                   Written by Tomonori Kouya */
/*                                             */
/* Version 0.01: 2007-10-04                    */
/***********************************************/
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_integration.h>
 
#define LIMIT_SIZE 1000
 
/* integrant */
/* sin(x) */
double func(const double x, void *param)
{
    return sin(x);
}
 
int main(void)
{
    int i, times, status;
    gsl_function f;
    gsl_integration_workspace *workspace;
    double a, b, ret, ret_abserr;
 
    /* set integration interval and integrant */
    a = 0.0;
    b = M_PI;
    f.function = &func;
    f.params = 0;
 
    /* Define type of Interpolation */
    workspace = gsl_integration_workspace_alloc(LIMIT_SIZE);
 
    /* QAG adaptive integraion */
    gsl_integration_qag(&f, a, b, 1.0e-20, 1.0e-10, LIMIT_SIZE, GSL_INTEG_GAUSS41, workspace, &ret, &ret_abserr);
 
    /* print */
    printf("QAG (exact_abserr, returned abserr): %25.17e (%10.3e, %10.3e)\n", ret, fabs(ret - 2.0), ret_abserr);
 
    /* free */
    gsl_integration_workspace_free(workspace);
 
    return 0;
}
