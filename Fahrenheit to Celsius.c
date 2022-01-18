#include<stdio.h>
int main()
{
    int F;
    float C;
    scanf("%d",&F);
    C=(float)((F-32)*5)/9;
    printf("%.2f",C);
    return 0;
}