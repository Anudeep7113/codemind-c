#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    if (c<9||r==0||c>10)
    {
        printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
}