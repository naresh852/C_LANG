#include <stdio.h>
#include <stdlib.h>
//print mem address with pointer//
/*int main()
{
    int age=30;
    int * page=&age;
    printf("%p",page);
    return 0;
}*/
//print mem add with &age//
int main()
{
    int age=30;
    int * page=&age;
    printf("%p",&age);
    return 0;
}
//dereferencing we use * to get stored value//
/*
int main()
{
    int age=30;
    int * page=&age;
    printf("%d",*page);
    return 0;
}*/

//use & again for mem add//
/*
int main()
{
    int age=30;
    int * page=&age;
    printf("%p",&*page);
    return 0;
}
*/

//use * again to get stored value//
/*
int main()
{
    int age=30;
    int * page=&age;
    printf("%d",*&*page);
    return 0;
}
*/


