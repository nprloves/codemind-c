#include<stdio.h>
int main()
{
    int n,d,sum=0,mul=1,sub;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        mul=mul*d;
    }
    sub=mul-sum;
    printf("%d",sub);
}