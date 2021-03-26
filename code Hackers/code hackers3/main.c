#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10];
    fgets(ch,10,stdin);
    printf("%s\n",ch);

    char s[20];
    fgets(s,20,stdin);
    printf("%s\n",s);

    char sen[100];
    fgets(sen,100,stdin);
    printf("%s",sen);
    return 0;

}
