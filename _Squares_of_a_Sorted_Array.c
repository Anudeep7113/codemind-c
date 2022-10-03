

#include<stdio.h>
int main()
{
    int a[100],b[100],i,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[j]=a[i]*a[i];
        j++;
    }
    int t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}