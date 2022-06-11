#include<stdio.h>
int main()
{
    int n,sum=0,r,temp,c;
    scanf("%d",&n);
    while(n!=0)
    {
        c=0;
        sum=0;
        temp=n;
        while(temp>0)
        {
            r=temp%10;
            sum+=r;
            temp=temp/10;
            c++;
        }
        if(c==1)
        {
            printf("%d",sum);
            break;
        }
        else
        {
            n=sum;
        }
    }
}