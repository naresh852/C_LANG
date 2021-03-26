#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int temp =*a;

    *a = *a + *b;
    *b = abs(temp - *b);

}

int main() {
    int x, y;
    int *pa = &x, *pb = &y;

    scanf("%d %d", &x, &y);
    update(pa, pb);
    printf("%d\n%d", x, y);

    return 0;
}


//we can use this also
/*
void update(int *a,int *b) {
    int add;
    int sub;
    add=*a+*b;
    sub=abs(*a-*b);
    *a=add;
    *b=sub;
}

int main() {
    int a, b;


    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}*/
