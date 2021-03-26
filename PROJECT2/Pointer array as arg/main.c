#include <stdio.h>
#include <stdlib.h>
int sum(int *pointer,int size){
int sum=0;
for(int i=0;i<size;i++){
    sum=sum+pointer[i];

}return sum;

}
int main()
{
   int  array[6]={1,2,3,4,5,4};
    printf("pointer array value is%d",sum(array,6));
    return 0;
}
