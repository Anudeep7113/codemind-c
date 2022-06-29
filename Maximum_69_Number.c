#include<stdio.h>
int main()
{
    int n,a[100],i,j=0,r;
    scanf("%d",&n);
    int c=0,d;
    d=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    while(j!=c)
    {
        r=d%10;
        a[j]=r;
       j++;
       d/=10;
    }
    for(i=j-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}