

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char color[20];
    char pluralnoun[20];
    char celebrity[10];
    printf("enter the color:");
    scanf("%s",color);
    printf("enter the pluralnoun:");
    scanf("%s",pluralnoun);
    printf("enter the celebrity:");
    scanf("%s",celebrity);

    printf("roses are %s\n",color);
    printf("%s is good\n",pluralnoun);
    printf("my fav celeb is: %s ",celebrity);

    return 0;
}
