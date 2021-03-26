#include <iostream>

using namespace std;

int max(int a,int b,int c){
int result;
if(a>=b && a>=c){
   result=a;
}else if(b>=c && b>=a){
result=b;
}else{result=c;}

return result;

}


int main()
{
    cout << max(4,5,5);
    return 0;
}
