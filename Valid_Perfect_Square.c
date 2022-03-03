#include<stdio.h>
#include<math.h>
int main()
{
    int num,arr[100],i;    
    int cal;
    float flo;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
    flo=sqrt((double)arr[i]);
    cal=flo;
    if(cal==flo)
        printf("True
");
    else
    printf("False
");
    }
}