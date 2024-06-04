#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
   
    
    for(int i=0; i<n;i++)
    {
        long long int a,b,c,d;
        scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
       // printf("%lld %lld %lld %lld\n", a,b,c,d);

        long long int missing; 
        missing = a/(b*c*d);
        if(b*c*d==0 || a==0 )
        {
            printf("%lld\n", missing);
        }
        else if(missing>=0 && a%(b*c*d)==0)
        {
            printf("%lld\n", missing);
        }
        else
        {
            printf("-1\n");
        }

    }
    
    printf("\n");



return 0;
}