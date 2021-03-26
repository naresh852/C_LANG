#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    scanf("%d",&age);
    int max;

    int sum=0;
    int arr[age];

    for(int i=0;i<1;i++){
        scanf("%d",&arr[0]);
    }
    max=arr[0];

    for(int i=1;i<age;i++){

        scanf("%d",&arr[i]);

        if(max<=arr[i]){
            max=arr[i];

        }
    }
    for(int j=0;j<age;j++){

        if(max==arr[j]){
            sum=sum+1;
        }
    }

    printf("%d",sum);
    return 0;
}
