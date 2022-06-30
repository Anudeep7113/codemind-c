#include<stdio.h>
int main()
{
    int n,i,sum=0,r,d,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=a[i];
        while(a[i]>0)
        {
            r=a[i]%10;
            sum=sum*10+r;
            a[i]=a[i]/10;
        }
    if(d==sum)
    {
        c++;
    }
    sum=0;
    }
    printf("%d",c);
    return 0;
}