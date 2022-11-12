//To calculate sum of square of first N natural numbers
#include<stdio.h>
int main()
{
    int i,N,S,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        S=i*i;
        sum=sum+S;
    }
    printf("The sum of square of first N numbers is: %d",sum);
    return 0;
}


