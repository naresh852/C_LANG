#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralnoun[20];
    char celeb[10];
    char celebl[10];

    printf("enter the color:");
    scanf("%s",color);
     printf("enter the pluralnoun:");
    scanf("%s",pluralnoun);
     printf("enter the celeb:");
    scanf("%s%s",celeb,celebl);


    printf("roses are %s\n",color);
    printf("%s is good\n",pluralnoun);


    printf("my fav celeb is %s %s",celeb,celebl);
    return 0;
}
