#include<stdio.h>
#include<conio.h>
int main()
{
    int count=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n!=0)
    {
         n=n/10;
         count++;
    }
     printf("this is  %d digit number",count);
}