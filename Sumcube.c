#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("Enter a number that you want:");
scanf("%d",&n);
for ( i = 0; i <=n; i++)
{
    sum=sum+(i*i*i);
    
}
printf("\n%d",sum);
return 0;
}