#include<stdio.h>
int main()
{
    int n,i,a[100],count=0,j,c2;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            sum+=a[i];
            c2++;
        }
        count=0;
    }
    avg=sum/c2;
    printf("%.2f",avg);
    return 0;
}