#include <iostream>

using namespace std;
class movie{
private:
    string rating;
    public:
  string name;
  string director;

  movie(string aname,string adirector,string arating){
      name=aname;
      director=adirector;
      setrating(arating);
  }
  void setrating(string arating){
  if(arating=="PG" || arating=="U" || arating=="A")
     {rating=arating;}
     else{rating="NR";}
  }
  string getrating()
{
    return rating;
}

};

int main()
{
    movie movie1("bhahubali","rajamouli","PG");
    //we can assign values like this also//
    //movie1.setrating("PGU");
    cout<<movie1.getrating()<<endl;
    cout <<movie1.name << endl;
    return 0;
}
