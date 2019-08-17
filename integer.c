#include <stdio.h>

int main()
{
    
    long long n;
    int count=0;
    printf("enter the value of n");
    scanf("%lld",&n);
    {
        while(n!=0)
        {
            n=n/10;
            ++count;
        }
printf("the value is %d",count) ;
}

    return 0;
}
