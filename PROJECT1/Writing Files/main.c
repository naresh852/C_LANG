#include <stdio.h>
#include <stdlib.h>
//to write a file//
/*
int main()
{
    FILE *fpointer=fopen("employess.txt","w");
    fprintf(fpointer," ajay:donor\n eagle :bird\n kite:flies\n");
    fclose(fpointer);

    return 0;
}*/

//to continue pending file//
/*
int main()
{
    FILE *fpointer=fopen("employess.txt","a");
    fprintf(fpointer," i love writing books\n");
    fclose(fpointer);

    return 0;
}
*/
/*
//to erase or override the file//
int main()
{
    FILE *fpointer=fopen("employess.txt","w");
    fprintf(fpointer," overridden");
    fclose(fpointer);

    return 0;
}
*/
int main()
{
    char line[250];
    FILE * fpointer=fopen("employess.txt","r");

    fgets(line,250,fpointer);
    printf("%s",line);
    fclose(fpointer);

    return 0;
}

