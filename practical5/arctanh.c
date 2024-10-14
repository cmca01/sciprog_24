#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double maclaurin();  // Function prototype
double logTan();

int main(void) {
  double delta;
  // Enter information from user
  printf("Enter a real poisitve number for delta\n");
  scanf("%lf",&delta);
  double mcl_est[180];
  double log_est[180];
  double diff[180];
  double x = -0.9;


  
  for (int n = 0; n <= 180; n++)
    {
      mcl_est[n] = maclaurin(x, delta);
      log_est[n] = logTan(x);
      diff[n] = fabs(mcl_est[n] - log_est[n]);
      //      printf("Maclaurin estimate of arctanh(%lf) = %lf\n", x, mcl_est[n]);
      // printf("log estimate of arctanh(%lf) = %lf\n", x, log_est[n]);
      printf("Absolute differences in estimates of tanh(%lf) = %.9f\n", x, diff[n]);
      x = x + 0.01;
    }
  }


double maclaurin (double x, double delta)
{
  double arctan_x;
  double element = 1;
  int n = 0;
  while (element > delta)
    {
      element = (pow(x, 2*n +1)) / (2*n +1);
      arctan_x = arctan_x + element;
      n = n+1; 
    }  
return arctan_x; 
}

double logTan (double x)
{
  double arctan_x;
  arctan_x = 0.5 * (log(1.0 + x) - log(1.0 - x));
  return arctan_x;
}
