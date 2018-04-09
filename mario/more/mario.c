#include <stdio.h>
#include<cs50.h>

int main(void)
{
int n;
//prompts user for a positive integer
do
{
    n = get_int("Height: ");
    //printf("Height of Pyramid :%i\n",n);
    if (n<0 || n>23) {
            continue;
        }
    //outer most loop to print rows = height of the pyramid
    for (int i = 0; i < n; i++) {
        //printf("%i\n",i);
        //loop to print spaces
        for (int y = 0; y <= n-i-2; y++ ){
            printf("%s", " ");
        }
        //loop to print left pyramid
        for (int x = 0; x <= i; x++) {
            printf("%s", "#");
        }
        printf("  ");//prints spaces between two pyramids
        //loop to print right pyramid
        for (int x = 0; x <= i; x++) {
            printf("%s", "#");
        }
        printf("\n");
    }

    return 0;

}
while (n<0 || n>23);
}


