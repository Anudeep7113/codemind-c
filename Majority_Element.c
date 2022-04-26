#include<stdio.h>
int main()
{
int i,n,a[100],j,count=0,p=-1,maxcount;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count>maxcount)
{
p=a[i];
}
}
printf("%d",p);
}