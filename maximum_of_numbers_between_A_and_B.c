#include<stdio.h>
int main()
{
  int i,j=0,m,n,s,a[100],b[100],max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  scanf("%d%d",&m,&s);
  for(i=0;i<n;i++)
  {
      if(a[i]>=m && s>=a[i])
      {
          b[j]=a[i];
          j++;
      }
  }
  if(j==0)
  {
      printf("-1");
  }
  else
  {
      max=b[0];
      for(i=0;i<j;i++)
      {
          if(max<b[i])
          {
              max=b[i];
          }
      }
      printf("%d",max);
  }
}