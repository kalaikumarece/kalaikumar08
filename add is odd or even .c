#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d  ,%d ",&a, &b);
    c=a+b;
    printf ("add of 2 num is %d",c);
    if(c%2==0)
    printf("even");
    else
    printf("odd");
    return 0;
}
