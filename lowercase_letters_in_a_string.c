#include<stdio.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='f' || s[i]=='g' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='h' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]== 'm' || s[i]=='n' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='y' || s[i]=='z')
            {
                c++;
            }
    }
    printf("%d",c);
}