#include <bits/stdc++.h>

using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll =roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student Rahim(29,9,5.04);
   cout << Rahim.cls << " "<< Rahim.roll<< " " << Rahim.gpa  << endl;










    return 0;
}