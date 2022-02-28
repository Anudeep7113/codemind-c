#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=sqrt(a[i]);
        if(a[i]==(b[i]*b[i]))
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}