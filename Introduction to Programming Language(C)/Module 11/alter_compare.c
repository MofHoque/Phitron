#include <stdio.h>
#include <string.h>
int main() 
{
    char x[21], y[21];
    scanf("%s %s", x,y);

    int comparison = strcmp(x,y);

    if(comparison<0)
    {
        printf("%s", x);
    }
    else if(comparison>0){
        printf("%s", y);
    }
    else{
        printf("%s", x);
    }


return 0;
}