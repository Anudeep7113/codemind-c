#include<stdio.h>
int main()
{
    int n,i,sum,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        printf("%d ",sum);
    }
}