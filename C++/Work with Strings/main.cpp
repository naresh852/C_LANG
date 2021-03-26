#include <iostream>

using namespace std;

int main()
{
    string name="naresh reddy";
   // cout<<name[0];
   //name[0]='g';
    //cout << name;
    //cout<<name.length();
    //cout<<name.find("res",0);
    //cout<<name.substr(7,3);
    string name1=name.substr(7,3);
    cout<<name1;
    return 0;
}
