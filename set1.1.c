#include <stdio.h>

int main()
{
    int n;
    printf("enter the number to check even or odd");
    scanf("%d",&n);
    if(n>=0)
    {
         if (n%2==0)
         printf("the given number is even");
         else 
         printf("the given number is odd ");
    }
    else  
     printf("the given input is not valid");
    return 0;
}
