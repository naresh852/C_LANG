#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter ur age:");
    scanf("%d",&age);
    if(age>18){
        printf("ur greater than  18 ");
    }
    if(age<18){
        printf("ur less than  18 ");
    }
    if(age==18){
        printf("ur equal to  18 ");
    }

    /*int age;
    printf("enter ur age:");
    scanf("%d",&age);
    if(age>18){
        printf("ur greater than  18 ");
    }else if(age==18){
    printf("ur equal to 18");
    }else{printf("ur less than 18");}
*/
    return 0;
}
