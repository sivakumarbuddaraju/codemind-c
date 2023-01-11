#include<stdio.h>
int main()
{
    float n,da,hra;
    float gs;
    scanf("%f",&n);
    if(n<=10000)
    {
        da=(n*80)/100;
        hra=(n*20)/100;
        gs=da+hra+n;
        printf("%.2f",gs);
    }
    else if(n<=20000)
    {
        da=(n*90)/100;
        hra=(n*25)/100;
        gs=da+hra+n;
        printf("%.2f",gs);
    }
    else
    {
        da=(n*95)/100;
        hra=(n*30)/100;
        gs=da+hra+n;
        printf("%.2f",gs);
    }
}