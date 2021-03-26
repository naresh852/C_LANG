#include <stdio.h>
#include <stdlib.h>

void sum(int a,int b){
int sum=a+b;
printf("sum of two num:%d",sum);
}

int main()
{
    int x,y;
    printf("enter two numbers:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    sum(x,y);
   /* sum(4,5);*/
    return 0;
}
