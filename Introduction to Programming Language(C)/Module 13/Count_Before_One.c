#include <stdio.h>
int count_before_one(int ar[], int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(ar[i]==1)
        {
            break;
        }
    count++;
    }
    return count;
}
int main() 
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("%d",count_before_one(A, N));

return 0;
}