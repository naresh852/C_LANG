#include <stdio.h>
#include <stdlib.h>

//sum of n natural num
int  fun(int n){
while(n!=0){
return n+fun(n-1);
}

}
int main(){
int n;
scanf("%d",&n);
int ans=fun(n);
printf("%d",ans);
return 0;
}
