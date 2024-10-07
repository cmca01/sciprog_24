#include <stdio.h>
#include <math.h>

//Global variables
int N = 13;
float array_tan[13];

//Function prototypes
float degtorad(float arg);
float trapezoidalRule_tanx(int N);

int main(void)
{

  float point_i_deg = 0.0; //initializing degree angles
  float point_i_rad = 0.0;

  printf("Array elements:\n"); // message to print to screen

  for (int i = 0; i< N; i++)
     {
     point_i_rad = degtorad(point_i_deg); 
     array_tan[i] = tan(point_i_rad);
     printf("%f ", array_tan[i]); //print array element
     point_i_deg = point_i_deg + 5;
     }
 
  printf("\n"); //end line after loop so that the array is all printed in one line

  //Area under curve with trapezoidal rule
  float areaUnderCurve = trapezoidalRule_tanx(N);
  printf("Area under curve with trapezoidal rule  = %f \n", areaUnderCurve);

}

//Degree to radians function
float degtorad(float arg)
{
  float pi= 3.1415927;
  return( (pi*arg)/180.0);
}

/*Trapezoidal Rule for tan(x) from 0 to 60 deg as a function
 of the number of points N */
float trapezoidalRule_tanx(int N)
{
   float a_deg = 0.0;
   float b_deg = 60;

   float a = degtorad(a_deg); // a in radians
   float b = degtorad(b_deg); // b in radians
  
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
   return areaUnderCurve;
}
