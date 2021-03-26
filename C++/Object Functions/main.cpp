#include <iostream>

using namespace std;
class student{
public:
    string name;
    char grade;
    double gpa;
    //for objects
      student(string Aname,char Agrade,double Ggpa){
       name=Aname;
       grade=Agrade;
       gpa=Ggpa;
      }
      bool hashonors(){
      if(gpa>=3.5){
      return true;}
      return false;
      }
};

int main()
{
    student student1("naresh",'A',3.6);
    student student2("ajay",'B',2.0);
    cout << student1.name << endl;
    cout <<student1.hashonors()<< endl;
    cout <<student2.hashonors()<< endl;
    return 0;
}
