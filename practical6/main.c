#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//declare functions
void matrix_multiply(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);


//declare global variables
int n = 5;
int p = 3;
int q = 4;

int main(void){
  //initialise arrays
  double A[n][p];
  double B[p][q];
  double C[n][q];

  //give values to matrix A
  printf("Matrix A: \n");
  for (int i = 0; i < n; i++)
    {
      for (int k = 0; k <p; k++)
	{
	  A[i][k] = i+1 + k+1;
	  printf("%.2f ", A[i][k]);
	}
      printf("\n");
    }

  //give values to matrix B
  printf("Matrix B: \n");
  for (int i = 0; i < p; i++)
    {
      for (int k = 0; k < q; k++)
	{
	  B[i][k] = i - k;
	  printf("%.2f ", B[i][k]);
	}
      printf("\n");
    }


  //call function from other file matmult.c to give values to C
  matrix_multiply(n, p, q, A, B, C);
    
  printf("Matrix C: \n");
  for (int i = 0; i < n; i++)
    {
      for (int k = 0; k < q; k++)
	{
	  printf("%.2f ", C[i][k]);
	}
      printf("\n");
    }
  
  return 0;
  
}
