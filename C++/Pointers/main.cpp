#include <iostream>

using namespace std;

int main()
{
    int age=19;
    int *page=&age;
    double gpa=2.5;
    double *pgpa=&gpa;
    string name="mike";
    string *pname=&name;
    cout << age<<endl;
    cout << gpa<<endl;
    cout << name<<endl;
    cout << *&age<<endl;
    cout << *&gpa<<endl;
    cout << *&name<<endl;
    cout << &age<<endl;
    cout << page<<endl;
    cout << &gpa<<endl;
    cout << pgpa<<endl;
    cout << &name<<endl;
    cout << pname<<endl;
    cout << *page<<endl;
    cout << *pgpa<<endl;
    cout << *pname<<endl;
    cout << *&age<<endl;
    cout << *&gpa<<endl;
    cout << *&name<<endl;

    return 0;
}
