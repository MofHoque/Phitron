#include <stdio.h>

int main() 
{
    int t;
    scanf("%d\n", &t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d\n", &m1, &m2, &d);
        int x = m1*d;
        int y = m1+m2;
        int z = x/y;
        int ans = d-z;

        printf("%d\n", ans);

    }


return 0;
}