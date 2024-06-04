#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int x;

    for (int i = 0; i < n; i++)
    {

        scanf("%lld", &ar[i]);
    }
    int ans = -1;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==x){
            ans = i;
            break;
        }
        
        }
    printf("%d", ans);
    
    return 0;
}