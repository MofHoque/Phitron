#include <stdio.h>

int main() 
{
    char c;
    int cnt=0;
    while (scanf("%c", &c)!=EOF)
    {
        if(c>='a' && c<='z' && c !='a' && c!='e' && c!='i' && c!='o' && c!='u'){
        cnt++;
        }
    }
    printf("%d", cnt);
    


return 0;
}