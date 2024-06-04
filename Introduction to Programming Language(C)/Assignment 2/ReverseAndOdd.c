#include <stdio.h>

int main()
{


    int N;
    int Ar[N];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &Ar[i]);
    }
    for(int i=N-1; i>=0; i--)
    {
        if(i%2!=0)
        {
            printf("%d", Ar[i]);
        }
    }





    return 0;

}
