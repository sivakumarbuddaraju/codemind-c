#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>b&&b>a)
    {
        printf("%d",c+b);
    }
    else if(b>a&&a>c)
    {
        printf("%d",b+a);
    }
    else
    {
        printf("%d",a+c);
    }
}