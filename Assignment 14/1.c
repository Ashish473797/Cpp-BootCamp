//Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10],sum = 0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of 10 number is %d",sum);
    return 0;
}