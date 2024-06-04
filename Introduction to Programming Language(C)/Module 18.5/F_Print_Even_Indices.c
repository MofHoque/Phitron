#include <stdio.h>
void fun(int a[], int n, int i)
{
    if(i<0) // base case
        return;
    if(i%2==0) // checking the even index
        printf("%d ",a[i]);
    fun(a,n,i-1);
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
    fun(a,n,n-1); // since we have to print it in reverse order we had to set the index from n-1 a is array, n is length

return 0;
}