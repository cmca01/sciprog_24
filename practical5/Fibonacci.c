#include <stdio.h>

int fibonacci(int n);  // Function prototype

int main(void) {
  int n;
  // Enter information from user
  printf("Enter an integer value for n\n");
  scanf("%d",&n);
  printf("Fibonacci Series up to  %d: \n", n);
  fibonacci(n);
  }

int fibonacci (int n)
{
  double series[n];
  series[0] = 0;
  series[1] = 1;
  printf("%d member of Fibonacci series: %lf \n", 0, series[0]);
  printf("%d member of Fibonacci series: %lf \n", 1, series[1]);
  for (int i = 2; i <= n; i++)
    {
      series[i] = series[i-1] + series[i-2];
      printf("%d member of Fibonacci series: %lf \n", i, series[i]);
    }
  return 0;

}
