#include <bits/stdc++.h>

using namespace std;

class myClass //declaring a  class
{
    public: // access specifier
    int num;
    string name;
};
int main()
{

    myClass obj; // creating an object
    obj.name = "Name"; // access attribute and set values
    obj.num = 17;

    cout << obj.name << endl;
    cout << obj.num << endl;

return 0;    
}