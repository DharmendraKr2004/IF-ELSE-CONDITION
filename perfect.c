#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the No :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    if(sum==n)
        {
            printf("It is perfect no");
        }
        else{
            printf("Not a perfect no");
        }

    return 0;
}