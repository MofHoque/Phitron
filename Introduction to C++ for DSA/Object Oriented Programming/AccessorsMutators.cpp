#include <bits/stdc++.h>

using namespace std;
class Rectangle
{
   private:
    int length; 
    int breadth;

    public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
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
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);

    cout << r.area() << endl;
}