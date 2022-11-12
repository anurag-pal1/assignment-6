//To calculate sum of first N odd numbers
#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=2*N;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum first N odd numbers is: %d",sum);
    return 0;
}

