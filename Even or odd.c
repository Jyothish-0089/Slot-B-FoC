#include <stdio.h>
int main ()
{
  int n;
  scanf ("%d", &n);
  if (n == 0)
    {
      printf ("%s", "It's zero");
    }
  if (n % 2 == 0)
    {
      printf ("%s", "It's an even number");
    }
  else
    {
      printf ("%s", "It's an odd number");
    }
  return 0;
}
