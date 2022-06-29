#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,r,d;
    scanf("%d",&n);
    d=n;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    printf("Not Spy Number");
    return 0;
}       