#include<stdio.h>
 
int main()
{
    int i, j, rows, columns, a[10][10], Sum;
    
   
    scanf("%d", &i);
    
   
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < 2; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    
    for(rows = 0; rows < i; rows++)
    {
        Sum = 0;
        for(columns = 0; columns < 2; columns++)
        {
            Sum = Sum + a[rows][columns];
        }
     printf("%d
",Sum);
    }
    
    return 0;
}