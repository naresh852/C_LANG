#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
                scanf("%d",&array[i][j]);
    }}
int diag1=0;
int diag2=0;
for(int i=0;i<n;i++){
    diag1=diag1+array[i][i];
}
for(int i=0;i<n;i++){

    diag2=diag2+array[i][n-i-1];
}
int diff=abs(diag1-diag2);
printf("%d",diff);


    return 0;
}
