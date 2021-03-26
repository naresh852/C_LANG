#include <stdio.h>
#include <stdlib.h>

int globe=1;

void func(){
int jun=2;
printf("jun value %d",jun);

}
int main()
{
    int local=12;
    printf("local var is:%d\n",local);
    printf("global value is %d\n",globe);
    func();
    return 0;
}
