#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][2]={
    {3 ,2},
    {5 ,4},
    {4 ,8}
    };
for(int i=0; i<3; i++){
    for(int j=0;j<2;j++){
        printf("elemnet[%d][%d]=%d\n",i,j,array[i][j]);
    }
}

    return 0;
}
