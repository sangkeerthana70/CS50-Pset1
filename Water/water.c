#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //prompt user to enter the minutes
    int Minutes = get_int("Enter Minutes: ");
    int Bottles = Minutes * 12;

    printf("Minutes: %i\n", Minutes);
    printf("Bottles: %i\n", Bottles);
}
