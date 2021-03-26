#include <iostream>

using namespace std;

class phone{
public: string phname;
        string manufcomp;
        int phnum;
};

int main()
{   phone phone1;
    phone1.phname="nokia";
    phone1.manufcomp="india";
    phone1.phnum=994837789;
    cout << phone1.phname << endl;
    cout << phone1.manufcomp << endl;
    cout << phone1.phnum << endl;
    return 0;
}
