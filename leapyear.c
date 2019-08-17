#include <stdio.h>

int main()
{
   int yr;
   printf("enter a year to check whether a year is leap year or not");
   scanf("%i",&yr);
   if(yr%4==0)
   {
       if(yr%100==0)
       {
           if(yr%400==0)
           
           printf("%d  is leap year",yr);
           else
           printf("%d  is not an leap year",yr);
       }
       else
       printf("%d is an leap year",yr);
   }
    else
    printf("%d is not an leap year ",yr);
    return 0;
}
