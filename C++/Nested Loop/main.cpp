#include <iostream>

using namespace std;

int main()
{
    int num[3][2]={
                 {4,2},
                 {5,1},
                 {6,8}
                };
    for(int i=0; i<3;i++){

        for(int j=0; j<2;j++){
            cout<<num[i][j];
        }cout<<"\n";
    }
    return 0;
}
