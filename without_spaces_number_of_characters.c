#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,len,min;
    char s[100];
    scanf("%[^
]s",s);
    len=strlen(s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
           continue;
        }
       c++;
    }
    printf("%d",c);
}
