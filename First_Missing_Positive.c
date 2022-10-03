

#include<stdio.h>
int main()
{
    int n,i,a[100],j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==a[j])
            {
                c=1;
                break;
            }
        }
        if(c==0){
        printf("%d",i);
        break;}
    }
}