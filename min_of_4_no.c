#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            {
                printf("Min = %d",a);
            }
            else
            {
                printf("Min = %d",d);
            }
        }
        else
        {
            printf("Min = %d",c);
        }
    }
    else if(b<c)
    {
        if(b<d)
        {
            printf("Min = %d",b);
        }
        else
        {
            printf("Min = %d",d);
        }
    }
    else
    {
        if(c<d)
        {
            printf("Min = %d",c);
        }
        else
        {
            printf("Min = %d",d);
        }
    }
    return 0;
}