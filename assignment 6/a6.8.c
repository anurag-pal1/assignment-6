//To check whether number is prime or not.
#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
        }
    }
    if(f==0)
    {
       printf("Number is prime.");
    }

    else if(f==1)
    {
        printf("Number is not prime.");
    }
    return 0;

}
