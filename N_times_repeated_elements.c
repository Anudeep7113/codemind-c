#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,k,m=0,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==k)
        {
            b[m]=a[i];
            m++;
            a[i]=0;
        }
    }
    if(m==0)
      printf("-1");
    else
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",b[i]);
        }
    }
}