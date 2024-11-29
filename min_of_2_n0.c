#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("Min = %d",a);
    }
    else
    {
        printf("Min = %d",b);
    }
    return 0;
}