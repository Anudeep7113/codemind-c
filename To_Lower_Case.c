#include<stdio.h>
int main()
{
    int i;
    char s1[100];
    scanf("%s",s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        s1[i]=s1[i]+32;
    }
    printf("%s",s1);
}