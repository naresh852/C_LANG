#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    char s[20];
    scanf("%s",&s);
    printf("%s\n",s);
    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    return 0;
}
