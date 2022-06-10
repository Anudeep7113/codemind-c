#include<stdio.h>
int main()
{
    int i,r,k,count=0;
    scanf("%d%d%d%d",&i,&r,&k);
    for(i=i++;i<=r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}