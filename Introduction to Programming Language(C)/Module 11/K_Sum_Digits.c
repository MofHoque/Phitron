#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    int sum =0;
    for(int i=0; i<n;i++)
    {
        int a;
        scanf("%1d", &a);
        sum = sum + a;
        
    }
    printf("%d", sum);
    
   


return 0;
}