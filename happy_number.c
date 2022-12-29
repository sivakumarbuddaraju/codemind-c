#include<stdio.h>
int main()
{
    int a,b,d,sum=0;
    scanf("%d",&a);
    b=a;
    while(b>=10)
    {
        while(b!=0)
        {
            d=b%10;
            sum=sum+(d*d);
            b=b/10;
        }
        b=sum;
        sum=0;
    }
    if(b==1)
    printf("True");
    else
    printf("False");
}