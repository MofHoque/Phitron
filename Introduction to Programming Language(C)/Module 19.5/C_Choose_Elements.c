#include <stdio.h>

int main() 
{
    int a, k;
    scanf("%d %d", &a, &k);

    int n[a];
    for(int i=0; i<a;i++)
    {
        scanf("%d ", &n[i]);
    }
    long long int sum = 0;
    int max = 0;
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1; j<a;j++)
        {
            if(n[i]<n[j])
            {
                int tmp = n[j];
                n[j] = n[i];
                n[i] = tmp;
            }
        }   
        
    }
    for(int i=0;i<k;i++)
    {
        if(n[i]<0)
        {
            break;
        }
        else{
            sum+=n[i];
        }
    }
    
    printf("%lld", sum);
         

return 0;
}