#include <stdio.h>
int print(int m, int n)
{   
    if(m>n)
        return 0;
    printf("%d",n);
    if(n>m)
        printf(" ");
    print(m, n-1);
}
int main() 
{
    int n;
    scanf("%d", &n);
    print(1,n);
    

return 0;
}