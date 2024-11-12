#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "magic_square.h"

int main(void)
{
  //MAGIC MATRIX
  
  //open file
  FILE *f;
  f = fopen("magic_square.txt", "r");
  if(f==NULL)
    {
      printf("!! can't open file\n");
      exit(1);
    }
  //find number of elements in file
  int no_elements = 0;
  double element;
    while (fscanf(f, "%lf", &element) == 1)
      {
        no_elements = no_elements + 1;
    }

    //matrix size is n x n
    //n is the square root of the number of elements
  int n;
  n = (int)sqrt(no_elements);
  //  printf("n = %d \n", n);

  //seek back to beginning of input file so that the file loads correctly
  fseek(f, 0, SEEK_SET); 


  //initialise matrix and read input data to it
  int matrix_magic[n][n];
  for (int i = 0; i < n; i ++)
    {
      for (int j = 0; j < n; j ++)
	{
	  fscanf(f,"%d", &matrix_magic[i][j]);
	}
    }

  //close input file
  fclose(f);

  //print matrix as a check
  printf("Matrix loaded from magic_square.txt: \n");
  for (int i = 0; i < n; i ++)
    {
      for (int j = 0; j < n; j ++)
	{
	  printf(" %d ",matrix_magic[i][j]);
	}
      printf("\n");
    }

  //check if matrix is magic
  int result = 0;
  result = isMagicSquare(n, matrix_magic);

  //REPEAT FOR NOT MAGIC MATIX

  FILE *f_2;
  f_2 = fopen("not_magic_square.txt", "r");
  if(f_2==NULL)
    {
      printf("!! can't open file\n");
      exit(1);
    }

  int no_elements_2 = 0;
  double element_2;
    while (fscanf(f_2, "%lf", &element) == 1)
      {
        no_elements_2 = no_elements_2 + 1;
    }

  int n_2;
  n_2 = (int)sqrt(no_elements_2);
  // printf("n = %d \n", n_2);

  fseek(f_2, 0, SEEK_SET); 


  int matrix_not_magic[n][n];
  for (int i = 0; i < n_2; i ++)
    {
      for (int j = 0; j < n_2; j ++)
	{
	  fscanf(f_2,"%d", &matrix_not_magic[i][j]);
	}
    }
  
  fclose(f_2);

  printf("Matrix loaded from matrix_not_magic.txt: \n");
  for (int i = 0; i < n_2; i ++)
    {
      for (int j = 0; j < n_2; j ++)
	{
	  printf(" %d ",matrix_not_magic[i][j]);
	}
      printf("\n");
    }

  int result_2 = 0;
  result_2 = isMagicSquare(n_2, matrix_not_magic);

  
}

