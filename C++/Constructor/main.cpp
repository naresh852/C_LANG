#include <iostream>

using namespace std;
class book{
public:
     string name;
        string auth;
        int pages;
        book(){
        name="chenna reddy";
        auth="farah aktar";
        pages=100;
        }
        book(string aname,string aauth,int apages){
        name=aname;
        auth=aauth;
        pages=apages;

        }
};

int main()
{
    book book1("tarzan","naresh",500);
    cout<<book1.name<<endl;
    cout<<book1.auth<<endl;
    cout<<book1.pages<<endl;
    book book2;
    cout<<book2.name<<endl;
    cout<<book2.auth<<endl;
    cout<<book2.pages<<endl;

    return 0;
}
