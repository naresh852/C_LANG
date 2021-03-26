#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++){
       scanf("%d",&ar[i]);
      sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}
