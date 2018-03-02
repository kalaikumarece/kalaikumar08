
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("the difference is c=%d\n",c);
    if(c%2==0)
    printf("even");
    else
    printf("odd");

    return 0;
}

