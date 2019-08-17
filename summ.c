#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter the value of n");
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d = sum",sum);
    return 0;
}
