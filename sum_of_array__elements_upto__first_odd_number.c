#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            break;
        }
        else
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
    return 0;
}