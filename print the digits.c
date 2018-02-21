#include <stdio.h>

int main()
{
int n,num;
printf("enter the no");
scanf("%d",&n);
while(n!=0)
{
    num=n%10;
    n=n/10;
printf("%d \n",num);
}
    return 0;
}
