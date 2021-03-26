#include <stdio.h>
#include <stdlib.h>

struct bankacunt {
    char name[50];
    char area[20];
    int num;
    double score;
};
int main()
{
    struct bankacunt holder1;
    holder1.num=123456;
    holder1.score=5.5;
    strcpy (holder1.name,"jim");
    strcpy (holder1.area,"lbnagar");
    printf("%s\n",holder1.name);
    printf("%s\n",holder1.area);
    printf("%f\n",holder1.score);
    printf("%d\n",holder1.num);

     struct bankacunt holder2;
    holder2.num=19948566;
    holder2.score=2.5;
    strcpy (holder2.name,"cena");
    strcpy (holder2.area,"vizag");
    printf("%s\n",holder2.name);
    printf("%s\n",holder2.area);
    printf("%f\n",holder2.score);
    printf("%d",holder2.num);

    return 0;
}
