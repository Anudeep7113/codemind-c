#include<stdio.h>
int main()
{
    int n,i,j,k,a[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&j,&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<j || a[i]>k)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}