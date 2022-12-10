#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        avg=avg+a[i];
    }
    printf("%.2f",avg/n);
}