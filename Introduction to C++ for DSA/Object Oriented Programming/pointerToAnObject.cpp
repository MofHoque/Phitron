#include <bits/stdc++.h>

using namespace std;
class Rectangle
{
    public:
    int length; 
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{ /*Stack
    Rectangle r1;
    Rectangle *ptr;
    ptr = &r1;
    ptr->length = 10;
    ptr->breadth = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

*/

    Rectangle *ptr = new Rectangle;
    ptr->length = 10;
    ptr->breadth = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;


    return 0;
}