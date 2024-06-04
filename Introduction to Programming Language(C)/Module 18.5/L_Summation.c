#include <stdio.h>
void fun(int a[], int n, int i,int sum)
{
    if(i==n){ // base case
        printf("%d", sum);
        return;
}
    sum = sum + a[i];
   // printf("%d", sum);
    fun(a,n,i+1, sum);
}
int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a,n,0,0); // since we have to print it in reverse order we had to set the index from n-1 a is array, n is length

return 0;
}