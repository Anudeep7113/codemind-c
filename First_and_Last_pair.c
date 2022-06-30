#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    d=n;
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
        printf("%d ",a[d-1]);
        d--;
    }
    if(n%2==1)
    {
        printf("%d ",a[i]);
        printf("0");
    }
}