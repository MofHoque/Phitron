#include <stdio.h>

int main() 
{

    int money;

    scanf("%d", &money);

    if(money>=100)
    {
        printf("I will eat burger.");
    }
    else if (money>=50)
    {
        printf("I will eat fuchka.");
    }
    else
    {
        printf("I won't eat.");
    }
    

return 0;

}