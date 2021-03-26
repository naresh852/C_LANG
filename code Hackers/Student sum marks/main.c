#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int stumarks(int marks[1000],int students,char gender){//*marks for pointers used

   int sun=0;
   for(int i=0;i<students;i++){
    if(gender=='g' &&  i%2 !=0){
        sun=sun+marks[i];
    }
    if(gender=='b' && i%2==0){
     sun=sun+marks[i];
    }
   }
   return sun;
}


int main()
{
    int students;
    char gender;
    int sum;
    scanf("%d",&students);
    int marks[1000];    //array of int size 1000

    //int *marks=(int *)malloc(students*sizeof(int)); //array of int of size students*int
    for(int i=0;i<students;i++){
        scanf("%d",&marks[i]); //scanf("%d",(marks+i)); //for pinter *marks
    }
    scanf(" %c",&gender);
    sum=stumarks(marks,students,gender);
    printf("%d",sum);
    return 0;
}
