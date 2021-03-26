#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int rev;
    int sum=0;
    //Complete the code to calculate the sum of the five digits on n.
    for(int i=0;i<5;i++){
      if(n>0){
      rev=n%10;
      n=n/10;
      sum=sum+rev;
      }


    }printf("%d",sum);
    return 0;
}
