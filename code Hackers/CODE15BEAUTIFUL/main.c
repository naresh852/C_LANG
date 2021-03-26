#include <stdio.h>
#include <stdlib.h>
int rev(int i){
       int revr=0;
       while(i>0){
    revr=revr*10+i%10;
    i=i/10;
    }
    return revr;
    }
int main()
{
    int sum=0;
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    for(int m=i;m<=j;m++){
        if(abs(m - rev(m)) % k == 0){
            sum++;
        }
        }
    printf("%d",sum);
    return 0;
}
/*
int main() {
int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int temp=a;temp<=b;temp++)
        {
        int p=temp,rev=0;
        while(p!=0)
            {
            rev=rev*10+(p%10);
            p=p/10;
        }
        if(abs(rev-temp)%c==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
*/
