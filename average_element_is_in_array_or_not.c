#include<stdio.h>
int main()
{
    int n,i,sum=0,flag,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+i;
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}