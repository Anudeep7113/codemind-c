#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,max,a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
        sum=0;
    }
    printf("%d",max);
}