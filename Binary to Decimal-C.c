#include <stdio.h>
#include <math.h>
int
main ()
{
  int n, i = 0, sum = 0, power;
  int arr[50];
  printf ("Enter the binary number: ");
  scanf ("%d", &n);
  printf ("The decimal number is: ");
  while (n > 0)
    {
      arr[i] = n % 10;
      power = pow (2, i);
      sum = sum + arr[i] * power;
      i++;
      n = n / 10;
    }
  printf ("%d", sum);
}
