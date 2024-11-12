#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int isMagicSquare(int n, int matrix[n][n])
{
  int M = 0;

  //calculate M for the first column
  for (int i = 0; i < n; i++)
    {
      M = M + matrix[i][0];
    }

  //  printf("M = %d \n", M);

  //check that the sums of all columns are equal to M
  for (int i = 0; i < n; i++)
    {
      int M_check = 0;
      for (int j = 0; j < n; j++)
	{
	  M_check = M_check + matrix[i][j];
	}
      
      //  printf("M_check = %d \n", M_check);
      if (M != M_check)
	{
	    printf("Square matrix is not a magic square \n");
	  return 1;
	}
      else continue;
    }

  //check columns
  for (int j = 0; j < n; j++)
    {
      int M_check = 0;
      for (int i = 0; i < n; i++)
	{
	  M_check = M_check + matrix[i][j];
	}
      
      // printf("M_check = %d \n", M_check);
      if (M != M_check)
	{
	  printf("Square matrix is not a magic square \n");
	  return 1;
	}
      else continue;
    }

  //check both diagonals
  int M_check_diag = 0;
  int M_check_diag_2 = 0;
    for (int j = 0; j < n; j++)
    {
      M_check_diag = M_check_diag + matrix[j][j];
      M_check_diag_2 = M_check_diag_2 + matrix[j][n - j - 1];
    }
    //  printf("M_check_diag = %d \n", M_check_diag);
    // printf("M_check_opp_diag = %d \n", M_check_diag_2);
      if (M != M_check_diag  || M != M_check_diag_2)
	{
	  printf("Square matrix is not a magic square \n");
	  return 1;
	}

      //if matrix satisfies all criterai, then it is magic    
  printf("Matrix is a magic square \n");
  printf("All rows, columns and diagonals add up to %d \n", M);
  return 0;

}

