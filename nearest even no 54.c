#include <stdio.h>

int main()
{
    int a;
    printf("enter the no");
    scanf("%d",&a);
    if(a%2==0)
    printf("nearest even no is %d",a);
    else
    printf("nearest even no is %d",a+1);
    
    
    return 0;
