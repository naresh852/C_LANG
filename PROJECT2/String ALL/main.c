#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*char string1[]={'h','e','l','l','o','\0'};
    char string2[]="hello";
    printf("result of string1 %s\n",string1);
    printf("result of string2 %s\n",string2);*/

    char string1[12]={"hello"};
    char string2[12]={"dad"};
    char string3[12];

    strcpy(string3,string1);
    strcat(string1,string2);

    int length=strlen(string2);

    printf("strcpy result:%s\n",string3);
    printf("strcat result:%s\n",string1);
    printf("strlen result:%d",length);

    return 0;
}
