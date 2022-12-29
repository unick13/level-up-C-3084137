#include "stdio.h"

float phi(float g, int precision)
{
  if (precision)
    return (g + 1 / phi(g, precision - 1));
  return g;
}

int main()
{
  int precision = 3;
  float r;

  r = phi(1.0, precision);

  printf("%.10f", r);

  return 0;
}