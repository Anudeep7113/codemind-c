#include<stdio.h>
int main()
{
    int n,i,j;
    
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        char s1[100];
        int c=0;
        scanf("%s",s1);
        for(i=0;s1[i]!=NULL;i++)
        {
            if(s1[i]>='0' && s1[i]<='9')
            c++;
        }
        if(c>0)
        printf("Yes
");
        else
        printf("No
");
    }
}