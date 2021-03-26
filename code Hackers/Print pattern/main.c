#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n+(n-1);i++){
        for(int j=i;j<n+(n-1);j++){
            printf("%d",n-i);}
printf("\n");
    }



    return 0;
}
*/
//copied code it works fine used new term malloc/*
/*
int main()
{

int n,i,j,n1,k,m;
scanf("%d", &n);
n1=n*2-1;
int **a = (int **)malloc(n1 * sizeof(int *));
for (i=0; i<n1; i++)
a[i] = (int *)malloc(n1 * sizeof(int));
k=0;
m=n1-1;
while(n!=0)
{
for (i=k;i<=m;i++)
{
for(j=k;j<=m;j++)
{
if(i==k ||i==m||j==k|| j==m)
a[i][j]=n;
}
}
++k;
--m;
--n;
}
for (i=0;i<n1;i++)
{
for(j=0;j<n1;j++)
{
printf("%d " ,a[i][j]);
}
printf("\n");
}

return 0;
}*/
//thise code copied from stackovverflow website its totally wrong dont use it/*
/*
int main()
{
int n,row,col,size;
scanf("%d", &n);
// Complete the code to print the pattern.
size=2*n-1;
  int arr[size][size];
  //n=n+1;
    while(n>0){
        row=0;
        col=0;
        while(col<size){
          arr[row][col] = n;
          col++;
        }
        col=size-1;
        row=0;
        while(row<size){
            arr[row][col]=n;
            row++;
        }
        row = size-1;
        col = size-1;
        while (col >=0) {
          arr[row][col] = n;
          col--;
        }
        col = 0;
        row = size-1;
        while (row >=0) {
          arr[row][col] = n;
          row--;
        }
        n--;
    }
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d",arr[row][col]);
        }
        printf("\n");
    }
return 0;
}
*///code copied and learned from youtube channel dev19//
int main(){
int n,size;
scanf("%d",&n);
size=n*2-1;
int start=0;
int end=size-1;
int arr[size][size];
while(n!=0){
    for(int i=start;i<=end;i++){
        for(int j=start;j<=end;j++){
         if(i==start||i==end||j==start||j==end){
          arr[i][j]=n;
         }
        }
    }start++;
    end--;
    n--;
}

for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        printf("%d ",arr[i][j]);}
        printf("\n");

}
return 0;
}
