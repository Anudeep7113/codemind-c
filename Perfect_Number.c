#include<stdio.h>  
int main()  
{  
   int i = 1, num, Sum = 0;  
   scanf("%d", &num);  
  
    while(i < num )  
                     
    {  
        if(num % i == 0)  
        Sum = Sum + i;  
        i++;  
    }  
    if(Sum == num)  
    printf("True");  
    else  
    printf("False");  
return 0;  
}   