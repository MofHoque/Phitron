#include <stdio.h>

int main() 
{
    int row,col; // declared row and column
    scanf("%d %d", &row, &col); // taking the input
    int a[row][col]; // put it on aRRAY
    for(int i=0;i<row;i++) // for row
    {
        for(int j=0; j<col;j++) // for column
        {
            scanf("%d ",&a[i][j]); // taking array input
        }
    }
    int e; // defining which column
    scanf("%d", &e); // taking input 
    // for(int i=0; i<col;i++) // run the loop for the column
    // { 
    //     printf("%d ", a[e][i]); // printing it 
    // }
    for(int i=0; i<row;i++) // run the loop for the row, column fixed
    { 
        printf("%d ", a[i][e]); // printing it 
    }


return 0;
}