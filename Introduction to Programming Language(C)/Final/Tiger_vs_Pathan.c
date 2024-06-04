#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);


    while(t--){
    int n;
    scanf("%d", &n);
    char str[100001];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    int tcount = 0;
    int pcount = 0;

    for (int i = 0; i < n; i++)
    {
        if(str[i]=='\0')
    {
        break;
    }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if (str[i] == 't')
        {
            tcount++;
        }
        if (str[i] == 'p')
        {
            pcount++;
        }
    }

    if (pcount > tcount)
    {
        printf("Pathaan\n");
    }
    else if (pcount < tcount)
    {
        printf("Tiger\n");
    }
    else
    {
        printf("Draw\n");
    }
}

    return 0;
}
