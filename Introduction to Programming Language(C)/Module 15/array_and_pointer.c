#include <stdio.h>

int main() 
{
    int ar[5] = {10,20,30,40,50};
    // printf("Address if 0th index - %p\n",&ar[0]);
    // printf("Address if 0th index - %p\n",  ar);
    // printf("Address if 0th index - %d\n",  *ar);
    printf("1s index value - %d\n",ar[1]);
    printf("1st index value %d\n",*(ar+1));


return 0;
}