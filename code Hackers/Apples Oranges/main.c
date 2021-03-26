#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t,a,b;

    /*a<s<t<b*/
    int ap,or;

    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&ap,&or);
    int arr[ap];
    int arro[or];
    int result[100];
    int res[100];
    int sum=0;
    int suu=0;
    for(int i=0;i<ap;i++){
     scanf("%d",&arr[i]);
     result[i]=a+arr[i];
     if(result[i]>=s && result[i]<=t)
     {sum=sum+1;
     }

    }
     for(int i=0;i<or;i++){
     scanf("%d",&arro[i]);
     res[i]=b+arro[i];
     if(res[i]>=s && res[i]<=t){
        suu++;
     }
    }
    printf("%d\n",sum);

    printf("%d",suu);

    return 0;
}
