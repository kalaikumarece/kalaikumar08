#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    c=a*b;
    if(c%2==0)
    printf(" product of two num %d& %d is even",a,b);
    else
    printf("product of two no is not even");
    
    return 0;
}
