#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age =20;
    int * pAge=&age;
    int **gage=&pAge;
    double gpa =3.5;
    double * pGPA=&gpa;
    char grade ='A';
    char * agrade=&grade;
    printf("mem add of age %p\n mem add of gpa:%p\n mem add of grade:%p\n", &age,&gpa,&grade);
    printf("age is %d\n",*pAge);
    printf("age is %d\n",**gage);
    return 0;
}
