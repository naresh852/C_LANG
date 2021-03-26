#include <stdio.h>
#include <stdlib.h>
union stdt {
int id;
char name[20];
double perct;

};
/*int main()
{
    union stdt one;

    /*printf("size of max data:%d",sizeof(one));
    one.id=1;
    strcpy(one.name,"johnnny");
    one.perct=7.8;
    printf("his id=%d\n his name=%s\n his gpa=%f",one.id,one.name,one.perct);
    return 0;
}*/
int main()
{
    union stdt one;

    one.id=2;
    printf("ur id =%d\n",one.id);
    strcpy(one.name,"john");
    printf("ur name =%s\n",one.name);
    one.perct=5.5;
    printf("ur gpa is=%f",one.perct);
    return 0;
}
