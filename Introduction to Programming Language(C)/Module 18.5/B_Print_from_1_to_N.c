#include <stdio.h>
int print(int m, int n)
{   
    if(m>n)
        return 0;
    printf("%d\n",m);
    print(m+1, n);
}
int main() 
{
    int n;
    scanf("%d", &n);
    print(1,n);
    


return 0;
}