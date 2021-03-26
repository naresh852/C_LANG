#include <iostream>

using namespace std;
class chef{
    public:
  void makechicken(){cout<<"makes chicken"<<endl;}
  void makefish(){cout<<"makes fish"<<endl;}
  void makessheep(){cout<<"makes sheep"<<endl;}
  void makesspecialdish(){cout<<"makes french fries"<<endl;};

};
class indianchef:public chef{
public:
      void makesspecialdish(){cout<<"makes village chicken"<<endl;}
      void makeseggcurry(){cout<<"yes he makes egg curry"<<endl;}


};

int main()
{
    chef chef1;
    chef1.makechicken();
    chef1.makesspecialdish();
    indianchef indianchef1;
    indianchef1.makeseggcurry();
    indianchef1.makesspecialdish();
    return 0;
}
