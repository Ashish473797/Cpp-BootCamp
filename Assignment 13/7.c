// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int a,int b)
{
    if(b==0)
    return a;
    return hcf(b,b%a);
}
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d%d",&a,&b);
    b<a?printf("%d",hcf(b,a)):printf("%d",hcf(a,b));
    return 0;
}