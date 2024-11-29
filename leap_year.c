#include<stdio.h>
int main()
{
    int lp;
    printf("Enter the year:");
    scanf("%d",&lp);
    if(lp%4==0)
    {
        if(lp%100==0)
        {
            if(lp%400==0)
            {
                printf("It is a leap year");
            }
            else
            printf("Not a leap year");

        }
        else
        printf("Not a leap year");
    }
    else
    printf("Not a leap year");
    return 0;
}