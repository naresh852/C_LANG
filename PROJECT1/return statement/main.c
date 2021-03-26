#include <stdio.h>
#include <stdlib.h>

double power(double num){
    double result = num*num*num;
    return result;



}
int main()
{
    printf("power of x is %f",power(4));
    return 0;
}

