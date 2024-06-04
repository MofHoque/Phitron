#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }
    int x;
    scanf("%d", &x);
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
           
           count++;
        }

    }
    if(count>0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    }

return 0;
}