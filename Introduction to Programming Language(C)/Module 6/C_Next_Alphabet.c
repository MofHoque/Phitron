#include <stdio.h>

int main() 
{
    char X;
    scanf("%c", &X);
    
    if (X >= 'a' && X <= 'z')
    {
        if (X == 'z') {
            printf("a\n");  // If X is 'z', print 'a'
        } else {
            char ans = X + 1;
            printf("%c\n", ans); // Otherwise, print the next character
        }
    }
  

    return 0;
}
