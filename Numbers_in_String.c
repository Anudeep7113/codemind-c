#include<stdio.h>
int main()
{
    int sum=0,i;
    char s1[100];
    scanf("%[^
]s",s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>='0' && s1[i]<='9')
        sum+=s1[i]-'0';
    }
    printf("%d",sum);
}