#include<stdio.h>
int main()
{
    int r,c,i,j,a[100][100],m=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        m=0;
        for(j=0;j<r;j++)
        {
            if(m<a[j][i])
            {
                m=a[j][i];
            }
        }
        printf("%d
",m);
    }
    
}