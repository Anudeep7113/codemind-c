#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n,avg,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}