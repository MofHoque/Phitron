#include <stdio.h>

int main() 
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf("  ");  
        }
        for(int j = i; j >= 1; j--)
        {
            printf("%0.1d", j);
        }
        printf("\n");
    }

    return 0;
}
