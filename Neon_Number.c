#include<stdio.h>
int main()
{
    int n,d,sum=0,mul;
    scanf("%d",&n);
    mul=n*n;
    while(mul!=0)
    {
        d=mul%10;
        sum=sum+d;
        mul=mul/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}