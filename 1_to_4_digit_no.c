#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    if(n>=0 && n<10)
    {
        printf("It is a Single digit No");
    }
    else if(n>=10 && n<100)
    {
        printf("It is a two digit No");
    }
    else if(n>=100 && n<1000)
    {
        printf("It is three digit No");
    }
    else if(n>=1000 && n<10000)
    {
        printf("It is a four digit No");
    }
    else{
        printf("out of the range");
    }
    return 0;
    
}