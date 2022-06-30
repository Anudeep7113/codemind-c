#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=3 && n<+100)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
    return 0;
}