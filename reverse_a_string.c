
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c,j=0;
    char s[100],s1[100];
    scanf("%[^
]s",s);
    c=strlen(s);
    for(i=c-1;i>=0;i--)
    {
        s1[j]=s[i];
        j++;
    }
    s1[j]=NULL;
    printf("%s",s1);
}