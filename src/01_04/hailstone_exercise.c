#include "stdio.h"

int count;

int hailstone(int n)
{
  printf("%d ", n);
  count++;
  if (n == 1)
  {
    printf("\n Sequence length: %d \n", count);
    return 1;
  }

  if (n % 2 == 1)
  {
    hailstone(3 * n + 1);
  }
  else
  {
    hailstone(n / 2);
  }
}

int main()
{
  int hail;

  count = 0;
  /* gather input */
  printf("Enter the starting value: ");
  scanf("%d", &hail);
  if (hail > 0)
  {
    printf("Hailstone sequence: ");
    hailstone(hail);
    return 1;
  }
  else
    return 0;
}