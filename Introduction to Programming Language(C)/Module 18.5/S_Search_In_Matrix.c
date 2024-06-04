#include <stdio.h>

int main() 
{
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d\n", &a[i][j]);
        }
        
    }
    int x;
    scanf("%d",&x);
    int flag = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(x==a[i][j])
           {
            flag = 0;
            break; // break from inner loop once the value is found
           }
        }
        if(flag ==0) // this is for break from outer loop
        {
            break;
        }
        
    }
    
    if(flag == 0)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
    }

return 0;
}