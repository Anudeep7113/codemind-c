#include<stdio.h>
int main()
{
    int i,n,c=0,a[i];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
    }
    if(c==n-1)
    printf("yes");
    else
    printf("no");
}