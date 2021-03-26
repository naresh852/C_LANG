#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=20;
    double gpa=3.5;
    char grade='A';
    printf("age:%p\ngpa:%p\ngrade:%p",&age,&gpa,&grade);
    return 0;
}
