#include <stdio.h>
#include <stdlib.h>

int main(){
int arr[1000];
int i,n,sum=0;
printf("enter size of array");
scanf("%d",&n);

printf("enter array values:");
for(i=0; i<n; i++){

    scanf("%d",&arr[i]);
}
for(i=0; i<n;i++){
    sum=sum+arr[i];

}
printf("%d",sum);


return 0;
}
