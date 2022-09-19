#include <stdio.h>
int
main ()
{
  int n, i = 1, prod = 1;
  scanf ("%d", &n);
  while (i <= n)
    {
      prod = prod * i;
      if (i < n)
	{
	  printf ("%d%s", i, "*");
	}
      if (i == n)
	{
	  printf ("%d%s%d", i, "=", prod);
	}
      i++;
    }
  return 0;
}
