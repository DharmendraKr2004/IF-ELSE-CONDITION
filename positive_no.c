#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("It is a Positive No");
    }
    else if(n==0)
    {
        printf("Neither a Positive No Nor a Negative No");
    }
    else
    {
        printf("Negative No");
    }
    return 0;
}