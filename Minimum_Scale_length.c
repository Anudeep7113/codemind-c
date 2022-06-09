#include<stdio.h>
int main()
{
    int i,n,a[100],c,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int j;
    for(i=max;i>=1;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}