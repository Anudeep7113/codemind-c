#include<stdio.h>
int main()
{
    int a,b,x,y,t;
    scanf("%d%d%d%d%d",&a,&b,&x,&y,&t);
    //if(2*x<a&&2*x<b)
    {
        t=(a+(2*x))*(b+(2*x));
        if(t>=0)
        printf("%d",(t-a*b)*y);
        
    }
    return 0;
}