#include <stdio.h>
int main()
{
    double num;
    printf("enter the number");
    scanf("%lf",&num);
        if(num<=0)
        {
            if(num==0)
            printf("you entered  0");
            else 
            printf("the entered number is negative");
        }
        else
         printf("the given number is positive number");

    return 0;
}
