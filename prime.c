#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
        {
            printf("THIS IS NOT PRIME NUMBER");
        }
        else{
            printf("THIS IS PRIME NUMBER");
        }
    return 0;
} 




