#include <iostream>

using namespace std;

int main()
{
    /*int age;
    cout<<"enter ur age:";
    cin>>age;
    cout << "ur "<<age<<" years old";*/
    /*double gpa;
    cout<<"enter ur gpa:";
    cin>>gpa;
    cout << "u have "<<gpa<<" gpa";*/
    char grade;
    cout<<"enter ur grade:";
    cin>>grade;
    cout << "ur grade is "<<grade;
   /* string name;
    cout<<"enter ur name:";
    cin>>name;
    cout << "ur name is "<<name;*/
    string name;
    cout<<"enter ur name:";
    getline(cin,name);
    cout << "ur name is "<<name;
    return 0;
}
