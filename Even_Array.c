#include<stdio.h>
int main()
{
    int a[100],n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    printf("False");
    else
    printf("True");
    return 0;
}