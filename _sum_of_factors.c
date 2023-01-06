#include<stdio.h>
int main()
{
    int n,total=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            total=total+i;
        }
    }
    printf("%d",total);
}