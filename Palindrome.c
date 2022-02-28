#include<stdio.h>
int main()
{
    int n,i,t=0,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        i=n%10;
        n/=10;
        t=((t*10) +i);
    }
    if(m==t)
    printf("True");
    else
    printf("False");
    return 0;
}