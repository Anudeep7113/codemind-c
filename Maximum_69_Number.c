#include<stdio.h>
int main()
{
    int n,a[100],i=0,r,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[i]=r;
        i++;
        n=n/10;
    }
    int d=i;
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=d-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}