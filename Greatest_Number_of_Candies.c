#include<stdio.h>
int main()
{
    int n,a[100],x,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(x+a[i]>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}