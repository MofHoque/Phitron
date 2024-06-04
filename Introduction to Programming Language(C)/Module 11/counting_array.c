#include <stdio.h>

int main() 
{
    int n;
    scanf("%d ", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    int cnt[7]={0};
    for(int i=0; i<n;i++){
        int val = a[i];
        cnt[val]++;
    }
    // printf("0 = %d\n" ,cnt[0]);
    // printf("01 = %d\n",cnt[1]);
    // printf("02 = %d\n",cnt[2]);
    // printf("03 = %d\n",cnt[3]);
    // printf("04 = %d\n",cnt[4]);
    // printf("05 = %d\n",cnt[5]);
    // printf("06 = %d\n",cnt[6]);
    for(int i=0; i<=6;i++){
        printf("%d - %d\n",i,cnt[i]);
    }


return 0;
}