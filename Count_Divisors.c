#include<stdio.h>
int main()
{
    int a,b,c=0,d,i;
    scanf("%d%d%d",&a,&b,&d);
    for(i=a;i<=b;i++)
    {
        if(i%d==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
