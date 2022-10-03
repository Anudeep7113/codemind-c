#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    d=n-j-1;
    for(i=0;i<d;i++)
    {
        b[j]=0;
        j++;
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}

