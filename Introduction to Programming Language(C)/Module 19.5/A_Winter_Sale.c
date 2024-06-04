#include <stdio.h>

int main() 
{
    float a,b;
    scanf("%f %f", &a,&b);

    float c = b/(100.00-a);

    float d = c * 100.00;

    printf("%0.2f", d);


return 0;
}