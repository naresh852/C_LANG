#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int array[10];
    int n;
    long int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){

        sum=sum+array[i];
    }
    printf("%ld",sum);
    return 0;
}

