#include<stdio.h>
#include<conio.h>
int main()
{
    int fact=1,i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d:",n,fact);
}