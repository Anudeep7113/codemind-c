#include<stdio.h>
int main()
{
    int i,j,n,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",a);
            a++;
        }
        printf("
");
        a=j+2;
    }
}