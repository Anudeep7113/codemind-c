#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    int i,len,c=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            c++;
        }
        len=i;
    }
    if(c-1==len)
    {
    printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}