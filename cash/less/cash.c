#include <stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float f;
   // int a;
    int q = 25;
    int d = 10;
    int n = 5;
    //int p = 1;
    int balance;
    //int rem;
    int g;
    int coins = 0;
    do
    {

        f = get_float("Change owed: ");
        if (f < 0)
        {
            continue;
        }
        //converts to cents.
        balance = f * 100;
        printf("Multiplied by 100: %i\n", balance);
        //check for quarters
        if (balance >= 25)
        {
            g = balance / q;
            printf("No of Quarters: %i\n", g);
            coins = coins + g;
            printf("Coins used: %i\n", coins);
            balance = balance % q;
            printf("remaining balance: %i\n", balance);
        }
        //check for dimes
        if (balance >= 10)
        {
            g = balance / d;
            printf("No of dimes: %i\n", g);
            coins = coins + g;
            printf("Coins used: %i\n", coins);
            balance = balance % d;
            printf("remaining balance: %i\n", balance);
        }
        //check for nickel
        if (balance >= 5)
        {
            g = balance / n;
            printf("No of nickel: %i\n", g);
            coins = coins + g;
            printf("Coins used: %i\n", coins);
            balance = balance % n;
            printf("rem: %i\n", balance);
        }
        //check for pennies
        coins = coins + balance;
        printf("No of pennies: %i\n", balance);
        printf("Total coins used: %i\n", coins);
        printf("%i\n", coins);
    }
    while (f < 0);

}

