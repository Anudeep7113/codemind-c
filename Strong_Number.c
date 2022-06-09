#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,r,d,i;
    scanf("%d",&n);
    d=n;
    while(n>0)
    {
        r=n%10;
        for(i=r;i>0;i--)
        {
            pro=pro*i;
        }
        sum+=pro;
        pro=1;
        n=n/10;
    }
    if(d==sum)
    {
        printf("The number %d is a strong number",d);
    }
    else
    {
        printf("The number %d is not a strong number",d);
    }
    return 0;
}