#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // N is the total width of the tree at its widest point

    // The canopy of the tree
    for (int i = 1; i <= n; i += 2) {
        // Print leading spaces for symmetry
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        // Print the asterisks for the canopy
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // The trunk of the tree, always 5 rows high, centered
    for (int i = 0; i < 5; i++) {
        // Print leading spaces for symmetry
        for (int j = 0; j < (n - 1) / 2; j++) {
            printf(" ");
        }
        // Print the asterisks for the trunk
        printf("*\n");
    }

    return 0;
}
