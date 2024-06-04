#include <stdio.h>

int main() 
{
    //declare
    int a[5][3];
    for(int i=0;i<5;i++) // for row
    {
        for(int j=0; j<3;j++) // for column
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++) // for row
    {
        for(int j=0; j<3;j++) // for column
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


return 0;
}