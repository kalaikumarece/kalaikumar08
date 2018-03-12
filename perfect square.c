
#include <stdio.h>
#include<math.h>
int main()
{
   int a,b,c,n;
   
   printf("enter the two no");
   scanf("%d %d",&a,&b);
   c=a*b;
   printf("value of product is %d",c);
   n=sqrt(c);
   if(c==n*n)
   printf("\nyes");
   else
   printf("\nno");
   
return 0;
}
