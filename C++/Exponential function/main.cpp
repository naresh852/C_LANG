#include <iostream>

using namespace std;

int power(int baseno,int powno ){
int result=1;
for(int i=0; i<powno; i++){
    result=result*baseno;
}
return result;
}

int main()
{
    cout << power(4,4);
    return 0;
}
