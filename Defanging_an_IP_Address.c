#include<stdio.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='.')
        {
        printf("[.]");
        }
        else
        {
        printf("%c",s[i]);
        }
    }
}