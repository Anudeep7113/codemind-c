#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100],sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
}
