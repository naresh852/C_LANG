#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a[1000];
    //a[0]="narssh";
    //a[1]="dongle";
    scanf("%s",&a[0]);
    scanf("%s",&a[1]);
    scanf("%s",&a[2]);
        printf("%s\n%s\n%s",&a[0],&a[1],&a[2]);
    return 0;
}/*
//without use of pointer it only prints last value correct
int main()
{
    char a[1000];
    //a[0]="narssh";
    //a[1]="dongle";
    scanf("%s",&a[0]);
    scanf("%s",&a[1]);
    scanf("%s",&a[2]);
        printf("%s\n%s\n%s",&a[0],&a[1],&a[2]);
    return 0;
}*/
