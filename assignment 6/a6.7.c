//To count digits in a number
#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The digits in given number is: %d",count);
    return 0;
}


