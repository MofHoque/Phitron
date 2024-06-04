#include <stdio.h>

int main() 
{

    int a;
    int b;
    scanf("%d %d", &a , &b);
    int c = b % a;

    if (c%2==0)
    {
        printf("Even");
    }
    else 
    {
        printf("Odd\n");
    }
    

    printf("%d", c); 

    return 0;
}