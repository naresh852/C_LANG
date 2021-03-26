#include <iostream>

using namespace std;

string days(int daynum){
string day;
switch(daynum){
    case 0:
    day="sunday";
    break;
    case 1:
    day="monday";
    break;
    case 2:
    day="tuesday";
    break;
    case 3:
    day="wednesday";
    break;
    case 4:
    day="thrusday";
    break;
    case 5:
    day="friday";
    break;
    case 6:
    day="saturday";
    break;
    default:
        day="invalid input";

}return day;
}
int main()
{
    cout<<days(6);
    return 0;
}
