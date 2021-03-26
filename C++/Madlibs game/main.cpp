#include <iostream>

using namespace std;

int main()
{
    string color,name,celeb;
    cout<<"enter a color:";
    getline(cin,color);
    cout<<"enter a name:";
    getline(cin,name);
    cout<<"enter a celeb:";
    getline(cin,celeb);
    cout << "rose is "<<color<<endl;
    cout<<"ur name is "<<name<<endl;
    cout<<"u like "<<celeb<<endl;
    return 0;
}
