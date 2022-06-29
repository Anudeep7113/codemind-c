#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            max=0;
            if(max<i)
            {
                max=a[i];
            }
        }
    }
    printf("%d",max);
}