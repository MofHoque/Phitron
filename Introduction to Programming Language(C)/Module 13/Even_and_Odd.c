#include <stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int evencount = 0, oddcount=0;

    for(int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(A[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("%d %d", evencount, oddcount);
}
int main() 
{
    odd_even();


return 0;
}