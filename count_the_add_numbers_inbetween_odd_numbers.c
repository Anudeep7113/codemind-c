#include<stdio.h>
int main()
{
    int i,c=0,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1 && a[i+1]%2==1 && a[i+2]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
}