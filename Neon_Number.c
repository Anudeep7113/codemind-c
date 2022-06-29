#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,sq=1,sum=0;
    scanf("%d",&n);
    x=n;
    sq=pow(n,2);
    while(sq!=0)
    {
        n=sq%10;
        sum+=n;
        sq=sq/10;
    }
    if(x==sum)
    printf("Neon Number
");
    else
    printf("Not Neon Number
");
    return 0;
}