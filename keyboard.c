#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    {
        printf("%c is a Capital Alphabet",x);
    }
    else if(x>='a' && x<='z')
    {
        printf("%c is a Small Alphabet",x);
    }
    else if(x=='0' || x=='1' || x=='2' || x=='3' || x=='4' || x=='5' || x=='6' || x=='7' || x=='8' || x=='9')
    {
        printf("it is a digit");
    }
    else{
        printf("it is a special symbol");
    }
    
    return 0;

}