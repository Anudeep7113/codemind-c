#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,m=0,b[100],k=0,sum=0;
    float avg,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            m++;
            b[k]=a[i];
            sum+=b[k];
            a[i]=0;
            k++;
        }
    }
  d=sum;
  if(m==0)
  printf("-1");
  else
  {
   avg=d/float(m);
   printf("%.2f",avg);
  }
}