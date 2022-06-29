#include<stdio.h>
int main()
{ 
    int n, t, sum = 0, remainder ; 
    scanf ("%d", &n); 
    t = n; while (n>0) 
    {
        remainder = n % 10;
        sum = sum *10 + remainder ; 
        n = n/ 10; 
    } 
    if(t== sum)
    printf("True"); 
    else 
    printf("False");
    return 0;
}