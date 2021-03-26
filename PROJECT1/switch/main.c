#include <stdio.h>
#include <stdlib.h>
int main()
{
    char grade;
    printf("enter ur grade");
    scanf("%c",&grade);


switch (grade){
    case 'A':
printf("u r great");
break;

  case 'B':
printf("u r alright");
break;
  case 'C':
printf("u r normal");
break;
  case 'D':
printf("u r bad");
break;

  case 'F':
printf("u r failed");
break;
default:{
printf("wrong input");
}
}
return 0;
}
