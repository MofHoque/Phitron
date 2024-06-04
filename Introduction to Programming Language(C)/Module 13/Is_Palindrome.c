#include <stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int len = strlen(s);
    int middle = len/2;

    for(int i=0; i<middle;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    char pali[1001];
    scanf("%s", pali);

    int res = is_palindrome(pali);

    if(res ==1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

return 0;
}