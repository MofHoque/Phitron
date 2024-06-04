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
Student *fun()
{
    Student *rahim = new Student(342,5,4.99);
    return rahim;
}

int main()
{
 

    Student *ans = fun();
    cout << ans->cls << " " << ans->roll << " " << ans->gpa << endl;


    delete ans;

    cout << ans->cls << " " << ans->roll << " " << ans->gpa << endl;

    return 0;
}