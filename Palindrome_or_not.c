
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,k=0;
    char s[100],s1[100];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    for(i=len-1;i>=0;i--)
    {
        s1[k]=s[i];
        k++;
    }
    s1[k]=NULL;
    if(!strcmp(s,s1))
    printf("True");
    else
    printf("False");
}