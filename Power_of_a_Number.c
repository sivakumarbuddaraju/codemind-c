#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=pow(a,b);
    y=x%c;
    printf("%d",y);
}