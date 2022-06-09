#include<stdio.h>
int main()
{
    int n,c=0,j,c1=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                c1++;
            }
            c=0;
        }
    }
    printf("%d",c1);
}