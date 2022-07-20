#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100],c=0,max=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=0;i<m;i++)
        {
            c=c+a[i][j];
        }
        if(max<c)
        {
            max=c;
        }
    }
    printf("%d",max);
}