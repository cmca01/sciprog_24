#include <stdio.h>                                                                                                     
#include <stdlib.h>                                                                                               
                                                                                                                        
void matrix_multiply(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q])
{
  
  //give values to matrix C                                                                                            
  for (int i = 0; i < n; i++)                                                                                           
    {                                                                                                                   
      for (int k = 0; k < q; k++)                                                                                       
        {                                                                                                               
          //initialise c[i][k] to 0 as requested                                                                        
          C[i][k] = 0;                                                                                                  
          for (int j = 0; j < p; j++)                                                                                   
            {                                                                                                           
              C[i][k] = C[i][k] + (A[i][j] * B[j][k]);                                                                  
            }                                                                                                           
        }                                                                                                               
    }                                                                                                                   
                                                                                                                        
                                                                                                                        
}                                                                                                                       
