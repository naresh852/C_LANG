#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    double pos=0;
    double neg=0;
    double zer=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos=pos+1;
        }else if(arr[i]<0){
        neg=neg+1;
        }else if(arr[i]==0){
            zer=zer+1;
        }
    }
   double one=pos/n;
   double two=neg/n;
   double three=zer/n;

    printf("%.6f\n",one);
    printf("%.6f\n",two);
    printf("%.6f",three);
    return 0;
}
