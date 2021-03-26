#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char n[1000];
    scanf("%[^\n]",n);//we can use fgets(n,1000,stdin);
    int l=strlen(n);
    int sum=0;
    for(int i=48;i<=57;i++){
            for(int j=0;j<l;j++ ){
        if(n[j]==i){
            sum=sum+1;
            }
            }printf("%d ",sum);
            sum=0;
    }

    return 0;
}
