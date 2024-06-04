#include <stdio.h>
void fun(int x)
{
    printf("Fun address %p\n", &x);
}
int main() 
{
    int x = 10;
    printf("Address of main - %p\n", &x);
    fun(x);


return 0;
}