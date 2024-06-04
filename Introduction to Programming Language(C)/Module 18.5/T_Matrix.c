#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    int primary_sum = 0;
    int secondary_sum = 0;

    
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                primary_sum += a[i][j];
            }
            if (i + j == n - 1) {
                secondary_sum += a[i][j];
            }
            
        }
    }

       int total_sum = abs(primary_sum - secondary_sum);
       printf("%d", total_sum);

    return 0;
}
