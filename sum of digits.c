#include <stdio.h>

int main()
{
    int num,temp,digit,sum=0;
    
printf("enter the element");
scanf("%d",&num);
temp=num;
while(num>0)
{
    digit=num%10;
    sum=sum+digit;
    num=num/10;
}
printf("sum of given no  %d is = %d",temp,sum);
    return 0;
}
