#include<stdio.h>
int main()
{
    int n,i,sum=0,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}