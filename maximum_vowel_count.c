#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,len;
    char s[100];
    scanf("%[^
]s",s);
    len=strlen(s);
    int max=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ' || i==len-1)
        {
            if(max<c)
            {
                max=c;
            }
            c=0;
        }
        else
        {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
           {
               c++;
           }
        }
    }
    printf("%d",max);
}
