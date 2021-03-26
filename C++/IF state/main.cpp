#include <iostream>

using namespace std;

int main()
{
    bool ismale=false;
    bool istall=false;
    if(ismale && istall){
        cout<<"u r tall male";
    }else if(ismale &&!istall){
    cout<<"ur short male";
    }else if(!ismale && istall){
    cout<<"ur tall but not male";
    }else{
    cout<<"ur not tall not male";
    }

    return 0;
}
