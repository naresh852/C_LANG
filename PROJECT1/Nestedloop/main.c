#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2]={
    {5,8},
    {7,4},
    {2,3}

    };
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){

            printf("%d,",nums[i][j]);
        }
       printf("\n");
    }

    return 0;
}
