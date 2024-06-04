#include <stdio.h>

int main() 
{
    int a;
    scanf("%d", &a);
    int c = a/1000;

    if(c%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }



return 0;
}