#include <stdio.h>

int main() 
{
    double x = 5.26;
    double *ptr = &x;

    printf("Value of x - %0.2lf\n", x);
    printf("Value of x - %0.2lf\n", *ptr);
    printf("Value of x - %d\n", sizeof(ptr));


return 0;
}