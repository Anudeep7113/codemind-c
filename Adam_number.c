#include<stdio.h>
int main()
{
    int n,r,sum=0,sq1,sq2,x,y,z;
    scanf("%d",&n);
    sq1=n*n;
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    sq2=sum*sum;
    while(sq2!=0)
    {
        y=sq2%10;
        z=z*10+y;
        sq2=sq2/10;
    }
    if(sq1==z)
     printf("True");
    else
     printf("False");
    return 0;
}