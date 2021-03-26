#include <iostream>

using namespace std;

int main()
{
    int secretnum=7;
    int guess;
    /*while(guess != secretnum){

            cout<<"enter ur guess";
            cin>>guess;
           }
    cout<<"you won";*/

    int guesscount=0;
    int guesslimit=3;
    bool outofguess=false;//they r not outofguesses

                              //!(false)
    while(guess!=secretnum && outofguess==false){//they r not out of guesses,but it becomes false as they become outofguesses.
          if(guesscount<guesslimit){
    cout<<"enter guess:";
    cin>>guess;
    guesscount++;}
    else{outofguess=true;} //!(true)

    }if(outofguess){
    cout<<"you lose";
} else{cout<<"you won";}
    return 0;

}
