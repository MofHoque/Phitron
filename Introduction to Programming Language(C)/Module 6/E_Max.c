#include <stdio.h>

int main() 
{
    int n,num, max = 0;
    scanf("%d", &n);

    for(int i=1; i<=n;i++)
    {
        scanf(" %d", &num);
        if (max<num)
        {
            max = num;

           
        }
        
    }
     printf("%d", max);

return 0;
}