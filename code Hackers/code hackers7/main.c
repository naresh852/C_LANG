/*#include <stdio.h>
#include <stdlib.h>*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
int a[100];
int b[100];

int j=0;
int k=0;
for (int i=0; i<3;i++){
    scanf("%d",&a[i]);
}

for(int i=0; i<3; i++){
    scanf("%d",&b[i]);
}
for(int i=0;i<3;i++){
if(a[i]>b[i]){
    j=j+1;
}else if(b[i]>a[i]){
 k=k+1;
}else if(a[i]==b[i]){
 j=j+0;
 k=k+0;
}
}printf("%d %d",j,k);
    return 0;
}
