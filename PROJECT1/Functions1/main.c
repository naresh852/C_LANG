#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayhi("tony",50);
    sayhi("tiny",20);
    sayhi("lona",55);

    return 0;
}

void sayhi(char name[],int age){

printf("hello %s ur age is %d\n",name,age);
}
