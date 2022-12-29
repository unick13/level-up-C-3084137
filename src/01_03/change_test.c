#include "stdio.h"

int main()
{
  int x, pennies, dimes, quarters, nickel, coins;
  float amount[] = {0.49, 1.27, 0.75, 1.31, 0.83};

  for (x = 0; x < 5; x++)
  {
    printf("%f in coins: \n", amount[x]);

    coins = amount[x] * 100;
    quarters = coins / 25;
    dimes = (coins - quarters * 25) / 10;
    nickel = (coins - quarters * 25 - dimes * 10) / 5;
    pennies = (coins - quarters * 25 - dimes * 10 - nickel * 5) / 1;

    printf("%d quarters %d dimmes %d nickels %d pennies \n", quarters, dimes, nickel, pennies);
  }
}