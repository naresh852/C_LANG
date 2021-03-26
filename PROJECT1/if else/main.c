#include <stdio.h>
#include <stdlib.h>

int greater(num1,num2){
int result;

    if(num1>num2){
        result=num1;

    }else{
    result=num2;
    }
    return result;

}



int main()
{
    printf("%d",greater(5,4));
    return 0;
}
