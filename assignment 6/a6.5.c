//To calculate sum of cube of first N natural numbers
#include<stdio.h>
int main()
{
    int i,N,c,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        c=i*i*i;
        sum = sum+c;

    }
    printf("The sum of cube of first N natural numbers is %d",sum);
    return 0;
}
