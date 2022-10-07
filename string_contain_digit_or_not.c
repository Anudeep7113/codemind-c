
#include<stdio.h>
int main()
{
    int i,c=0;
    char s1[100];
    scanf("%s",s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>='0' && s1[i]<='9')
        c++;
    }
    if(c==0)
    printf("Doesn't contain digit");
    else
    printf("Contains %d digit",c);
}