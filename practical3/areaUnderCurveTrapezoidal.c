#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int N;
   float a,b;
   float pi = 3.14159265;

/* Intialise variables */
   N = 12;
   a =0.0;
   b = pi/3.0;

/* Trapezoidal Rule */
   float sum_total = 0.0;
   float distBetweenPoints = ( b - a ) / N;
   float point_i = 0;
   sum_total = sum_total + tan(a) + tan(b);
   int i = 0;
   for (i = 1; i< N; i++)
     {
       point_i = point_i + distBetweenPoints;
       sum_total = sum_total + 2 * tan(point_i);
     }
   float areaUnderCurve = (( b - a )/ ( 2 * N )) * sum_total; 

   
/* Compare to log(2) */
   float log_2 = log(2);
   float abs_difference = fabs( areaUnderCurve - log(2) );



/* Print results */
   printf("Area under curve with trapezoidal rule  = %f \nlog(2) = %f \nAbsolute Difference Between AUC and log(2) = %f \n",
      areaUnderCurve,log_2,abs_difference);

}
