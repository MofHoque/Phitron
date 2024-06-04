#include <stdio.h>
#include <string.h>
int main() 
{
    char a[10];
    fgets(a,18,stdin);
    a[16] = '\0';
    printf("%s", a);

return 0;
}