#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    c=a^b;
    printf("after swapping the no is %d,%d",c,b);
    
    return 0;
}
