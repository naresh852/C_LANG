#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[3][2];
    numbers[0][0]=2;
    numbers[1][1]=5;
    numbers[1][0]=6;


    printf("%d",numbers[1][1]);
    return 0;
}
