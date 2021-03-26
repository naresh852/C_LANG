#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<38){
            arr[i]=arr[i];
        }if(arr[i]>=38){
          if((arr[i]+1)%5 == 0){
            arr[i]=arr[i]+1;
        }
        if((arr[i]+2)%5 ==0){
            arr[i]=arr[i]+2;
        }
        }
    }for(int j=0;j<n;j++){
    printf("%d\n",arr[j]);}
    return 0;
}
