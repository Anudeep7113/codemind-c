#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],d,sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=a[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum1+=a[i];
    }
     printf("%d
",sum);
     printf("%d",sum1);
}