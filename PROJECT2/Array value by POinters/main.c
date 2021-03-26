#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3]={1,2,3};
    int *point[3];

    for(int i=0; i<3; i++){
        point[i]=&array[i];///assign array values to pointer

    }for(int i=0;i<3;i++){
    printf("value of array by point[%d]=%d\n",i,*point[i]);
    }

    return 0;
}
