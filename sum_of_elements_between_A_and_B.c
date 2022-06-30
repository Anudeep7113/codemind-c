#include<stdio.h>
int main()
{
    int m,n,i,a[100],r,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&m,&r);
    for(i=0;i<n;i++)
    {
        if(a[i]>=m && a[i]<=r)
        {
            k+=a[i];
        }
    }
    printf("%d",k);
}