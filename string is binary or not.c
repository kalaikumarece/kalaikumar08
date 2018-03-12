#include <stdio.h>

int main()
{
   char a[10];
   int b,c=0,i,n;
   printf("ente the char");
   scanf("%s",a);
   b=strlen(a);
   for(i=0;i<n;i++)
   {
       if(a[i]==0||a[i]==1)
       {
           c++;
       }
   }
   if(c==a)
   {
       printf("binary");
   }
  else
  printf("not binary");
    return 0;
}
