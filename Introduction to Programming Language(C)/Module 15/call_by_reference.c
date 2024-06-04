#include <stdio.h>
void fun(int *p)
{
    printf("value of - %d\n",*p);
}
int main() 
{
    int x = 100;
    printf("x er address- %p\n", &x);
    fun(&x);


return 0;
}