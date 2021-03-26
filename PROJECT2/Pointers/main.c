#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=30;
    int *pointr;
    pointr=&var;
    printf("address of var:%x\n",&var);
    printf("address of pointer %x\n",pointr);
    printf("value of var:%d\n",*pointr);
    printf("value of var:%x\n",&*pointr);
    return 0;
}
