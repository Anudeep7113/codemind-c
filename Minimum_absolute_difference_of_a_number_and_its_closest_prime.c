#include<stdio.h>
int main()
{
    int i,n,c=0,j,c1=0,r1,r2,max,min;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("0");
    }
    else
    {
        for(i=n;i>=0;i--)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                min=i;
                break;
            }
        }
        for(i=n;;i++)
        {
            c1=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c1++;
                }
            }
            if(c1==2)
            {
                max=i;
                break;
            }
        }
        r1=n-min;
        r2=max-n;
        if(r1<r2)
        {
            printf("%d",r1);
        }
        else
        {
            printf("%d",r2);
        }
    }
    
}