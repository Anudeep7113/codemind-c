#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(prime(n)&&prime(rev))
    {
        printf("circular prime");
    }
    else if(prime(n) || prime(rev))
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}