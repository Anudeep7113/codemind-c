#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,M,P,D;
    scanf("%d%d%d",&X,&Y,&M);
    P=pow(X,Y);
    D=P%M;
    printf("%d",D);
    return 0;
    
}