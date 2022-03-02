#include<stdio.h>
#include<math.h>
int main()
{
    int num;    
    int cal;
    float flo;
    scanf("%d",&num);
    flo=sqrt((double)num);
    cal=flo;
    if(cal==flo)
        printf("True");
    else
    printf("False");
}