#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // printf("ar[%d]\n", i);

        scanf("%lld", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    if (sum < 0)
    {
        printf("%lld", sum* -1);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}