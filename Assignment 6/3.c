#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = sum + (i*2-1);
    }
    printf("sum is %d",sum);
    return 0;
}