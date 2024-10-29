#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//int* allocatearray(int n);
//void fillwithones(int *array, int n);
//void print_int_array(int *array, int n);
double* allocatedouble(int n);
double euler_est(int k, double *array);

int main(void)
{
  int n;
  printf("Input integer n: ");
  scanf("%d", &n);
  printf("\n");
  
  double* array_factorials = allocatedouble(n+1);
  double* array_estimates = allocatedouble(n+1);
  
  for (int k = 1; k <= n; k++)
    {
      double fact = 1;
      for (int a = 1; a <= k; a++)
	{
	  fact *= a;
	}
      if (fact > 0.000001)
	{
	  array_factorials[k] = fact; 
	}
      array_estimates[k] = euler_est(k, array_factorials);
      printf("Euler estimate with terms up to order %d = %.9f \n", k, array_estimates[k]);

      double diff = fabs(array_estimates[k] - 2.71828);
      printf("Polynomial Order: %d, Difference with exact = %.11f \n", k, diff);
    }

   free(array_factorials);
   free(array_estimates);
   
   return 0;
}

double* allocatedouble(int n)
{
  double *r;
  r = (double*) malloc( n * sizeof(double));

   if (r == NULL)
     {
       printf("Memory allocation failed.\n");
       return NULL;
     }
    
  return r;
}

double euler_est(int j, double *array)
{
  double est = 1;
  for (int i = 0; i < j; i++)
    {
      double i_double = (double) i;
      if (array[i] > 0.00001)
	{
	  est += pow(1, i_double)/ array[i + 1]; 
	}
     }
  est = est + 1;
  return est;
}

/*
int* allocatearray(int n)
{
  int *r;
  r = (int*) malloc( n * sizeof(int));

   if (r == NULL)
     {
       printf("Memory allocation failed.\n");
       return NULL;
     }
    
  return r;
}

void fillwithones(int *array, int n)
{
  for (int i = 0; i < n; i++)
    {
      array[i] = 1;
    }

}

void print_int_array(int *array, int n)
{
  
  for (int i = 0; i < n; i++)
    {
      printf("%d, ", array[i]);
    }
  printf("\n");
}
*/
