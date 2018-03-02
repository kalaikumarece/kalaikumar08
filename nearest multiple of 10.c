#include <stdio.h>

int main()
{
    int a;
    printf("enter the no");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
    printf("nearest multiple of given no is %d",a);
    return 0;
}
