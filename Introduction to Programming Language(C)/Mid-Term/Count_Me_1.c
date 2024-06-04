#include <stdio.h>

int main() 
{
    int n, even=0,odd=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d", &a[n]);

        if(a[n]%2==0){
            
            even++;
        }
        else if(a[n]%3==0){
            
            odd++;
        }
    }
    printf("%d ", even);
    printf("%d ", odd);

return 0;
}