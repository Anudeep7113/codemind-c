#include<stdio.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        c++;
    }
    printf("%d",c);
}