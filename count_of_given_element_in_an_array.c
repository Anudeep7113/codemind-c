#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
int ge;
scanf("%d",&ge);
for(i=0;i<n;i++)
{
	if(a[i]==ge)
	{
	    c++;
	}
}
printf("%d",c);
}