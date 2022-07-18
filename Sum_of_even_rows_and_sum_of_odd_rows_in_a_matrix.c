#include<stdio.h>
int main()
{
    int a[100][100],sum=0,sum1=0,i,j,n,m;
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
         if(i%2==0)
         {
           sum+=a[i][j];
         }
         else
         {
             sum1+=a[i][j];
         }
     }
    }
     printf("%d %d",sum,sum1);
    
}
