#include<stdio.h>
int main()
{
    int n,a[100],i,t,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            sum+=2;
        }
        else
        {
            sum+=1;
        }
    }
    printf("%d",sum);
}