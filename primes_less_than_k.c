#include<stdio.h>
int main()
{
    int n,i,j,c1,c2,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                c1++;
            }
        }
        if(c1==2)
        {
            if(a[i]<=k)
            {
                c2++;
            }
        }
        c1=0;
    }
    printf("%d",c2);
        return 0;
}


