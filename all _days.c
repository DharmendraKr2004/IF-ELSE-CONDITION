#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character:");
    scanf("%c",&x);
    if(x=='1')
    printf("It is Monday");
    else if(x=='2')
    printf("It is Tuesday");
    else if(x=='3')
    printf("It is Wednesday");
    else if(x=='4')
    printf("It is Thursday");
    else if(x=='5')
    printf("It is Friday");
    else if(x=='6')
    printf("It is Saturday");
    else if(x=='7')
    printf("It is Sunday");
    else{
    printf("invalid");
    }
    return 0;
}