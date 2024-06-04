#include <stdio.h>

int main() 
{
    int x = 100;
    int *ptr = &x;
    // printf("Address of x - %p\n", &x);
    // printf("value of ptr - %p\n", ptr);
    // printf("value of ptr - %p\n", &ptr);
    // printf("value of ptr - %d\n", sizeof(ptr));

    x = 200;
    printf("%d\n", x);
    printf("%d\n",*ptr);
    



return 0;
}