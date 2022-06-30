#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        if(c==a[i])
        {
            m++;
            a[i]=0;
        }
    }
   printf("%d",m);
}