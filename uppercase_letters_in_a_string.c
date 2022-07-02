#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='F' || s[i]=='G' || s[i]=='H' || s[i]=='I' || s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || s[i]=='N' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]== 'R' || s[i]=='S' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                c++;
            }
    }
    printf("%d",c);
}