#include<stdio.h>
#include<cs50.h>

/* PR Comment #1
 *      At the top of a module, or file - even one this small - you could
 *      put a simple comment about what this file does, e.g.
    "Print an estimate of how many bottles of water were used based
     on itime in shower"
 *
 * On such a tiny project, it seems unnecessary but later on you may have
 * many small files like this in a project and even you might not remember
 * why you wrote the file.
 */
int main(void)
{
    //prompt user to enter the minutes
    int Minutes = get_int("Enter Minutes: ");
    int Bottles = Minutes * 12;

    printf("Minutes: %i\n", Minutes);
    printf("Bottles: %i\n", Bottles);
}
