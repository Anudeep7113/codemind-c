#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    for(i=1;i<n;i+=2)
    {
        if(i%2!=0)
        {
            c+=a[i];
        }
    }
    printf("%d",s-c);
}