#include <stdio.h>

int main()
{
    int num, N, evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            evenCount++;
        }
        if (num % 2 != 0)
        {
            oddCount++;
        }
        if (num > 0)
        {
            posCount++;
        }
        if (num < 0)
        {
            negCount++;
        }
    }
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", posCount);
    printf("Negative: %d\n", negCount);

    return 0;
}