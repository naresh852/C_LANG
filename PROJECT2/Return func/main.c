#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
return(a*b);

}
int main()
{
    int prod;
    prod=add(2,2);
    printf("result is:%d",prod);
    /*printf("result is:%d",add(10,2));*/
    return 0;
}
/*
int main()
{
    int x,y;
    printf("enter two digits:");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("result is:%d",add(x,y));

return 0;
}*/
