#include <bits/stdc++.h>

using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->gpa = gpa;
        this->roll =roll;
    }
};
int main()
{
 Student *karim = new Student(342,5,4.99);

 cout << karim->cls << " " << karim->gpa << " " << karim->gpa << endl;








    return 0;
}