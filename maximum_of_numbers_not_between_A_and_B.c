#include<stdio.h>
int main()
{
    int n,a[100],i,j=0,m,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&m,&s);
    int d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<m || s<a[i])
        {
            if(d<a[i])
            {
                d=a[i];
                j=1;
            }
        }
    }
    if(j==0)
    printf("-1");
    else
    printf("%d",d);
    
}