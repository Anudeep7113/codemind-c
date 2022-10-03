#include<stdio.h>
int main()
{
    int m,n,k,i,a[100],b[100],c=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<=k && b[i]>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}