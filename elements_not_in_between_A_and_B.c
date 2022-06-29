#include<stdio.h>
int main()
{
    int n,i,j,k,a[100],m,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&m,&s);
    for(i=0;i<n;i++)
    {
        if(a[i]<m || a[i]>s)
        {
            printf("%d ",a[i]);
            j=1;
        }
    }
    if(j==0)
    printf("-1");
}