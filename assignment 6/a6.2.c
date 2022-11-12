//To calculate sum of first N even numbers
#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<2*N;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum first N even numbers is: %d",sum);
    return 0;
}
