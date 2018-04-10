#include <stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
/* PR Comment #1
 *  When you get done with a project, try to clean up old temporary
 *  variables, like 'a', 'p' and 'rem'
 */
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

/* PR Comment #2
 *      More obvious variable nams might help ot at least make a comment
 *      as you declare them. 'g' is not clear to me without reading all
 *      the code.
 */
    do
    {

        f = get_float("Change owed: ");
        if (f < 0)
        {
            continue;
        }

/* PR Comment #3
 *      Maybe consider a loop here. If you look at the individual
 *      blocks for each coin type, you have almost the exact same
 *      code repeated 5 times.
 *      If you could get the value (e.g. 25) and the names (e.g. 'quarter')
 *      into a separate array, you might be able to handle all 5 coin
 *      type in a single loop.
 */
        //converts to cents.
        balance = f * 100;
        printf("Multiplied by 100: %i\n", balance);
        //check for quarters
        if (balance >= q)
        {
            g = balance / q;
            printf("No of Quarters: %i\n", g);
            coins = coins + g;
            printf("Coins used: %i\n", coins);
            balance = balance % q;
            printf("remaining balance: %i\n", balance);
        }
        //check for dimes
        if (balance >= d)
        {
            g = balance / d;
            printf("No of dimes: %i\n", g);
            coins = coins + g;
            printf("Coins used: %i\n", coins);
            balance = balance % d;
            printf("remaining balance: %i\n", balance);
        }
        //check for nickel
        if (balance >= n)
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
/* PR Comment #4
 *      So now that we are way down here, I can't remember what 'f'
 *      stands for anymore, so if it had a more meaningful name - or
 *      if you commented this line, I would have enough info right
 *      here, without having to go back to see what you were looping on.
 */
    while (f < 0);

}

