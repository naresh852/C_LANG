#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven","eight", "nine", "even", "odd"};
    int labels_index;
  	for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }
    //printf("%s",labels[0]);

    return 0;
}
//for taking sentence as input.
int main(){

char str[20];
//scanf("%[^\n]",&str);
gets(str);
printf("%s",str);




return 0;
}
/*//DIFFERENCE BW ar[] && ar[][] of integer 2D array
int main()
{
   int abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };
    for (int i=0; i<=4; i++)
    {
        /* The correct way of displaying an address would be
         * printf("%p ",abc[i]); but for the demonstration
         * purpose I am displaying the address in int so that
         * you can relate the output with the diagram above that
         * shows how many bytes an int element uses and how they
         * are stored in contiguous memory locations.
         *

    	printf("%d ",abc[i][i]);

    }printf("\n");
    printf("%d %d %d %d",abc[0],abc[1],abc[2],abc[3]);
    return 0;
}*/
