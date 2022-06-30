#include<stdio.h>
int main()
{
    long int a[100],n,i,sum=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum+=a[i];
    }
    printf("%ld",sum);
}

