#include <stdio.h>
void fun(int i)
{
    if(i==6) // base case first so that we stop the infinite recursion
    
        return;
    
    printf("%d\n",i);
    
    
    fun(i+1); // incrementing the value 
} 
int main() 
{
    fun(1); // calling the function in main function


return 0;
}