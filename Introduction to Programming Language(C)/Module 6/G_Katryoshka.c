#include <stdio.h>

int main() 
{
    long long int n,m,k;
    long long int result=0;
    scanf("%lld %lld %lld", &n, &m, &k);
    if(n==0 || k==0){
        printf("0");
    }
    else{
        long long int pq=n;
        if(m<pq){
            pq=m;
        }
        if(k<pq)
        {
            pq=k;
        }
        result = result+pq;
        n=n-pq;
        m=m-pq;
        k=k-pq;
        if(n/2<k){
            result = result+n/2;
        }
        else {
            result = result + k;
        }
        printf("%lld", result);
    }

return 0;
}