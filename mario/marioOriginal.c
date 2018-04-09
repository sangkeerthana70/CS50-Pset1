#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
do
{
    n = get_int();
    printf("User input: %i\n", n);
    for (int i = 0; i < n; i++) {
        for (int j=1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
while (n<0 || n>23);
}