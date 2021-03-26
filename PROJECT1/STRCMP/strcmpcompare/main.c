#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[50];
    char name2[50];
    scanf("%s%s",&name1,&name2);
    int d;
    d=strcmp(name1,name2);
    if(d==0){
        printf("%s is  equal to %s",name1,name2);
    }else if(d>0){
     printf("%s is greater than %s",name1,name2);
    }else{printf("%s is less than %s",name1,name2);}
    return 0;
}
