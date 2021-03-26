#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int i=0;
    do{
        printf("value of i is:%d\n",i);
        i++;

    }while(i<=10);

    printf("-------------------\n");
    int j=0;
    while(j<=10){
        printf("value of j:%d\n",j);
        j++;
    }
    return 0;
}*/

//previous value is stored in c,c moves forward always //
int main()
{
    int i=0;
    do{
        printf("value of i is:%d\n",i);
        i++;

    }while(i<=10);

    printf("-------------------\n");

    while(i<=20){
        printf("value of i:%d\n",i);
        i++;
    }
    return 0;
}
