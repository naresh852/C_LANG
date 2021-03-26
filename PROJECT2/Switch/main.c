#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int marks=83;
    switch(marks){
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    printf("excellent");
    break;
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    printf("very good");
    break;
    case 70:
    printf("good");
    break;
    case 60:
    printf("better");
    break;
    case 50:
    printf("average");
    break;
    default:
    printf("failed");
    }
    return 0;
}
*/
//for taking input of marks fom a user//
int main()
{
    int marks;
    printf("enter ur marks:");
    scanf("%d",&marks);
    switch(marks){
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    printf("excellent");
    break;
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    printf("very good");
    break;
    case 70:
    printf("good");
    break;
    case 60:
    printf("better");
    break;
    case 50:
    printf("average");
    break;
    default:
    printf("failed");
    }
    return 0;
}
