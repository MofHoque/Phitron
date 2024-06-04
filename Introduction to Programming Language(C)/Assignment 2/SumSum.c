#include <stdio.h>


int main()
{

    int N;
    scanf("%d", &N);
    int V;
    int sum_of_positive = 0;
    int sum_of_negative = 0 ;
    for(int i=1; i<=N; i++){
        scanf("%d",&V);
        if(V>0){
            sum_of_positive = sum_of_positive + V;

        }
        else if(V<0) {
             sum_of_negative= sum_of_negative + V;
        }
    }

    printf("%d %d", sum_of_positive, sum_of_negative);


}
