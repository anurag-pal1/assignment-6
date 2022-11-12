//To calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
       sum=sum+i;
    }
    printf("\nThe sum of N numbers is %d",sum);
    return 0;

}
