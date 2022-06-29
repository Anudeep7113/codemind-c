#include<stdio.h>
int main()
{
    int n,x,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n==i*(i+1))
        {
            printf("YES");
            break;
        }
        else
        {
            c++;
        }
    }
    if(c==n-1)
    printf("NO");
}