#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("enter ur name:");
    fgets(name, 20, stdin);
    printf("ur name is %s",name);
    return 0;
}
