#include<stdio.h>
int main()
{
    int n,i,sum=0,r,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            r=a[i]%10;
            sum+=r;
            a[i]=a[i]/10;
        }
    }
    printf("%d",sum);
    return 0;
}