#include <stdio.h>

int main() 
{
     int n;
    scanf("%d", &n);
    int ar[n];
    int x;

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n;i++){
        if(ar[i]>0){
            printf("1 ");
        }
        if(ar[i]<0){
            printf("2 ");
        }
        if(ar[i]==0){
            printf("0 ");
        }
    }


return 0;
}