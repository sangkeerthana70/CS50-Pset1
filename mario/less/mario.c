#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    //prompts user for a positive integer
    do
    {
        n = get_int("Height: ");
        if (n<0 || n>23) {
            continue;
        }
/* PR COMMENT 1
 *      Use slightly more descriptive variable names.
 *      If you rename 'i' as 'row' and 'n' as 'height' then this:
            "y <= n-i-2"
        becomes
            "y <= height - row -2"
        which is a bit more readable
 */

       // printf("Height of Pyramid :%i\n",n);
        //outer most loop to print rows = height of the pyramid
        for (int i = 0; i < n; i++) {
            //printf("%i\n",i);
            //loop to print spaces
/* PR COMMENT 2
 *      A comment here might explain why you are subtracting 2
 *      so it doesn't look like magic.
 */
            for (int y = 0; y <= n-i-2; y++ ){
                printf("%s", " ");
            }
            //loop to print hashes
            for (int x = 0; x <=i+1; x++) {
                printf("%s", "#");
            }
            printf("\n");//go to next line
        }

    }
    while (n<0 || n>23);//checks for invalid number supplied and repeats the do while again

}


