#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
int main()
{

    char *arr;
    arr=(int*)malloc(sizeof(arr)*1024);
    scanf("%[^\n]*c",arr);
    printf("%d\n",sizeof(arr));
    printf("%c\n",arr[1]);
    printf("%d\n",strlen(arr));
    printf("%c",arr[5]);

    return 0;
}*/
int main() {

    char s[1000];
    //char *s;   //for mallloc
    //s = malloc(1024 * sizeof(char));
    //fgets(s,1000,stdin);  //we can use this also instead of %[^\n]*c to take a sentence input.
    scanf("%[^\n]*c", s);
   // s = realloc(s, strlen(s));
    //Write your logic to print the tokens of the sentence here.
    int l=strlen(s);
    for(int i=0;i<l;i++){
    if(s[i]==' '){
     printf("\n");
    }else{printf("%c",s[i]);}
    }
    return 0;
}
