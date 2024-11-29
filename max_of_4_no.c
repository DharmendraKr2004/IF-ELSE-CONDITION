#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the No:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("max = %d",a);
            }
            else{
                printf("max = %d",d);
            }
        }
        else{
            printf("max = %d",c);
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("max = %d",b);
        }
        else{
            printf("max = %d",d);
        }
    }
    else if(c>d)
    {
        printf("max = %d",c);
    }
    else{
        printf("max = %d",d);
    }
    return 0;

}