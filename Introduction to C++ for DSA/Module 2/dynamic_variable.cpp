#include <bits/stdc++.h>

using namespace std;
// int ** fun() // pointer to a pointer
// {
//    int *a = new int; // dynamically allocates memory for an integer. Assigns the address to the pointer a
//    //cout << "Fun: " << a << endl;
//    *a = 100; // Assigns the value to the memory location pointed to by a
//     cout << "Fun: " << &a << endl; // prints the address of pointer a
//    return &a;
// }

// int main()
// {
//     int **p = fun();

//     cout << "Main: " << p << endl;
//     //int *a = new int ;
//     //*a = 10;

//     //cout << *a <<" "<< a << endl; //*dereference for value //a for adddress
//     return 0;
// }
int *fun()
{
    int *a = new int;
    cout << "Fun: " << a << endl;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout << "MAIN: " << *p << endl;
}