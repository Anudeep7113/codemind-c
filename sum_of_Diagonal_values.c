#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100],s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s+=a[i][j];
            }
            else if(i==n-j-1)
            {
                s+=a[i][j];
            }
        }
    }
    
    printf("%d",s);
}