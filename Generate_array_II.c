#include<stdio.h>
int main()
{
    int n,i,a[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i+1;
        if(i%2==0)
        {
            while(a[j]>0)
            {
                printf("%d ",a[i]);
                a[j]--;
            }
        }
    }
}