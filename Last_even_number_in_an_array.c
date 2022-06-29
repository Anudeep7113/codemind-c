#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {

            max=0;
            if(max<i)
            {
                max=a[i];
                c++;
            }
        }
    }if(c==0)
    {
        printf("10");
    }
    else{
    printf("%d",max);
}
        
    }