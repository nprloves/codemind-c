#include<stdio.h>
int main(){
    int num,rem,d=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(d<rem){
            d=rem;
        }
        num=num/10;
    }
    printf("%d",d);
}