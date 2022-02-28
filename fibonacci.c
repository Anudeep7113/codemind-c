#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a=0,b=0,c=1;
    printf("0 1 ");
    scanf("%d",&i);
    for(i=0;i<n-2;i++)
    {
        a=b+c;
        b=c;
        c=a;
        printf("%d ",a);
    }
    return 0;
}