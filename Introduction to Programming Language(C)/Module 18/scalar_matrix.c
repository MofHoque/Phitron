#include <stdio.h>

int main() 
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int element = row * col;
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    int flag = 1;
    if(row!=col) //if row and column isnt same 
    {
        flag =0;//if its not equal flag is equal to 0
    }
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i == j ) // if 
            {
                if(a[i][j] != a[0][0])
                {
                    flag = 0;
                }
                continue;
            }
            if(a[i][j]!=0)
            {
                flag =0;
            }
        }
    }
if(flag==1)
{
    printf("Scalar matrix");
}
else{
    printf("Not scalar");
}
return 0;
}
