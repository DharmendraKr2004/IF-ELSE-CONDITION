#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the Number:");
    scanf("%d",&n);
    b=1;
    while(n!=0)
    {
        a=n%10;
        printf("%d * %d +",a,b);
        n=n/10;
        b=b*10;
        
    }
    printf("0\n");
    return 0;
}