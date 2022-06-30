#include<stdio.h>
int main()
{
    int n,a[100],c,b[100],i,j,k=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[i]=0;
                for(k=i;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
   }
   int sum=0;
   for(i=0;i<n;i++)
   {
       if(a[i]%2!=0)
       {
           sum+=a[i];
       }
   }
   printf("%d",sum);
}