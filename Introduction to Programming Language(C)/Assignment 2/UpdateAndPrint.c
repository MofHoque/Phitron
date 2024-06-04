#include <stdio.h>

int main ()
{

    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=1; i<=N; i++){
        scanf("%d", &arr[i]);
    }
    int X, V;
    scanf("%d %d",&X, &V);

    if(X>=0 && X<N)
    {
        arr[X] = V;
    }
    for(int i= N; i>=0; i--){
        printf("%d", arr[i]);
    }



    return 0;
}
