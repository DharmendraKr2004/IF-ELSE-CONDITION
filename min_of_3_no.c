#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("Min = %d",a);
        }
        else
        {
            printf("Min = %d",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("Min = %d",b);
        }
        else
        {
            printf("Min = %d",c);
        }
    }
    return 0;
}