#include <stdio.h>

int main() 
{
    int t;
    char c;
    
    scanf("%d\n", &t);
   
    for(int i=0; i<t;i++){
        int small=0, capital=0,digits=0;
        while(scanf("%c", &c) !=EOF)
        {
            if(c>='a' && c<='z'){
                small++;
            }
            else if(c>='A' && c<='Z'){
                capital++;
            }
            else if(c>='0' && c<='9'){
                digits++;
            }
            else if(c=='\n'){
                break;
            }
        }
        printf("%d %d %d\n", capital, small, digits);
       // printf("%d", capital);
    }


return 0;
}