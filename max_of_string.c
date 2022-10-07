#include<stdio.h>
int main()
{
    int c=0,i,d,n;
    char s[100];
    scanf("%[^
]s",s);
    c=int(s[0]);
    for(i=0;s[i]!=NULL;i++)
    {
        if(c<int(s[i]))
        {
            c=int(s[i]);
            d=i;
        }
    }
    printf("%c",s[d]);
}