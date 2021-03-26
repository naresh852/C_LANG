#include <stdio.h>
#include <stdlib.h>
/*
struct studt{
int id;
char name[20];
double perct;
};
int main()
{
    struct studt one;
    one.id=1;
    strcpy(one.name,"king");
    one.perct=7.70;
    printf("studt id=%d studt name=%s studt perc=%f\n",one.id,one.name,one.perct);
    return 0;
}*/
struct studt{
int id;
char name[20];
double perct;
}one;   ///we can declare variable here also
int main()
{

    one.id=1;
    strcpy(one.name,"king");
    one.perct=7.70;
    printf("studt id=%d studt name=%s studt perc=%f\n",one.id,one.name,one.perct);
    return 0;
}
