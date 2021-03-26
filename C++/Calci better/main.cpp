#include <iostream>

using namespace std;

int main()
{
    int i,j;
    char op;
int result;
    cout << "enter first num";
    cin>>i;
    cout << "enter operator" ;
    cin>>op;
    cout << "enter second num";
    cin>>j;
    if (op=='+'){

        result=i+j;
    }else if (op=='-'){
        result=i-j;
    }else if(op=='*'){
    result=i*j;
    }else if(op=='/'){
        result=i/j;
    }else if(op=='%'){
    result=i%j;
    }else{cout<<"invalid input";}
    cout<<result;
    return 0;
}
