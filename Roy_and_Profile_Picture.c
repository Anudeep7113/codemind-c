#include<stdio.h>
int main()
{
   int i,l,w,h,n;
   scanf("%d",&l);
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     scanf("%d %d",&h,&w);
     if((w<l) || (h<l))
     printf("UPLOAD ANOTHER
");
     else
      {

        if(w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
          
      }
       
   }
    
}