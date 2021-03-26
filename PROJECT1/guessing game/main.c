#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretno=5;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    int outofguess=0;
    while(guess!=secretno && outofguess==0){

        if(guesscount<guesslimit){
            printf("enter ur guess:");
            scanf("%d",&guess);
            guesscount++;

        }else
        {
        outofguess=1;}}

        if(outofguess==1){
        printf("ur out of guesses");
        }else{
        printf("u won!");}

}
