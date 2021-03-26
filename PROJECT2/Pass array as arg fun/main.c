#include <stdio.h>
#include <stdlib.h>
int sum(int array[],int size){
    int sum=0;
for(int i=0; i<size; i++){
    sum=sum+array[i];

}return sum;
}


int main()
{
    int array2[7]={1,2,3,4,5,6,7};
    printf("sum of array2:%d",sum(array2,7));
    return 0;
}
