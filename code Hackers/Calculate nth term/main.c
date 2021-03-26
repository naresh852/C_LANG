#include <stdio.h>
#include <stdlib.h>

/*//sum of nth term
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    while(n!= 0)
        // sum() function calls itself
        retun n+sum(n-1);
}*/
//calculate the nth term s(n)=s(n-1)+s(n-2)+s(n-3)
int last(int n,int a,int b,int c){
if(n==1){return a;}
else if(n==2){return b;}
else if(n==3){return c;}
return last(n-1,a,b,c)+last(n-2,a,b,c)+last(n-3,a,b,c);
}
int main(){
int n,a,b,c;
scanf("%d%d%d%d",&n,&a,&b,&c);
int ans=last(n,a,b,c);
printf("%d",ans);
return 0;
}
