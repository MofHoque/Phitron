#include <bits/stdc++.h>

using namespace std;
int *fun()
{
    int a[5] ={10,20,30,40,50};

    return a;
}
int main()
{
    int *a= fun();
    for(int i=0; i<5;i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
/*
There is a substantial difference between declaring a normal array
and allocating dynamic memory for a block of memory using new. The most
important difference is that the size of a regular array needs to be a
constant expression, and thus its size has to be determined at the
moment of designing the program, before it is run, whereas the dynamic
memory allocation performed by new allows to assign memory during
runtime using any variable value as size.

The dynamic memory requested by our program is allocated by the system
from the memory heap. However, computer memory is a limited resource,
and it can be exhausted. Therefore, there are no guarantees that all 
requests to allocate memory using operator new are going to be granted
by the system.

https://cplusplus.com/doc/tutorial/dynamic/
*/