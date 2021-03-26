#include <stdio.h>
#include <stdlib.h>

void point(int *pointer){///memory address ,we dont know memy address
                         ///pointer=&pointervar;
*pointer=1000;
return;
}
int main()
{
    int pointervar;
    point(&pointervar);///assign pointer value to pointervar
    printf("value of pointer:%d",pointervar);
    return 0;
}
