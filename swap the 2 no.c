#include <stdio.h>

int main()
{
int a,b,c;
printf("enter the no a,b");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;

printf ("after swapping a is %d,b is %d",a,b);
    return 0;
}
