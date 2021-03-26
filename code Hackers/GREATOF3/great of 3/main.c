#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){

    int result;
    if(a>b && a>c && a>d){

            result=a;

    }if(b>a && b>c && b>d){
        result=b;

        }if(c>a && c>b && c>d){

            result=c;
        }else{result=d;}
        return result;
}



int main() {
    int x, y, z, m;
    scanf("%d\n %d\n %d\n %d", &x, &y, &z, &m);
     max_of_four(x, y, z, m);
    printf("%d",max_of_four(x, y, z, m));

    return 0;
}
