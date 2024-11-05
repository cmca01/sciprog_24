#include <stdlib.h>
#include <stdio.h>

int GCD(int a, int b);

int main(void)
{
  int a;
  printf("Input the first integer : ");
  scanf("%d", &a);
  printf("\n");

  int b;
  printf("Input the second integer: ");
  scanf("%d", &b);
  printf("\n");

  //ensure a greater than or equal to b
  int c;
  if (a < b)
    {
      c = a;
      a = b;
      b = c;
    }

  int gcd;
  gcd = GCD(a, b);
  printf("GCD of %d and %d is %d", a, b, gcd);
  printf("\n");
  return 0;
}

int GCD(int a, int b)
{
  int gcd;
  int temp;
  while (b != 0)
    {
      temp = b;
      b = a %  b;
      a = temp;
    }
  gcd = a;
  return gcd;
}
