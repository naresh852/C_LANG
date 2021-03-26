#include <stdio.h>
#include <stdlib.h>

int main()
{

    char color[20];
    char pluralnoun[20];
    char celebrity[10];
    printf("enter the color:");
    fgets(color,20,stdin);
    printf("enter the pluralnoun:");
    fgets(pluralnoun,20,stdin);
    printf("enter the celebrity:");
    fgets(celebrity,10,stdin);

    printf("roses are %s\n",color);
    printf("%s is good \n ",pluralnoun);
    printf("my fav celeb is: %s ",celebrity);
    return 0;

}
