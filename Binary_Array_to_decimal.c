#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,a[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=n;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum+=pow(2,c-1);
        }
        c--;
    }
    printf("%d",sum);
    return 0;
}
