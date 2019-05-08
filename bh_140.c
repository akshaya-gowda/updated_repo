#include<stdio.h>
int main()
{
    int n,rem,originalint=0;
    int var=0;
    printf("enter the n: ");
    scanf("%d",&n);

    originalint=n;

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        var=var*10;
        var=var+rem;
    }
    if(originalint==var)
    {
        printf("%d is a palindrome",var);
    }
    else
    {
        printf("%d is not a palindrome",var);
    }
}
