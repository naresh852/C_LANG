#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[250];
    FILE * fpointer=fopen("employess.txt","r");

    fgets(line,250,fpointer);
    printf("%s",line);
    fgets(line,250,fpointer);
    printf("%s",line);
    fgets(line,250,fpointer);
    printf("%s",line);
    fclose(fpointer);

    return 0;
}
