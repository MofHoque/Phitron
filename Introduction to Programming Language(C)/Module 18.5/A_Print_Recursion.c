#include <stdio.h>
void print(char s[], int i)
{
    if(s[i]=='\0')
        return;
    printf("%c", s[i]);
    print(s,i+1);
}
int main() 
{
    char str[100] = "I love Recursion";
    int n;
    scanf("%d", &n);

    for(int i=0; i<n;i++)
    {
    print(str, 0);
    printf("\n");
    }
return 0;
}