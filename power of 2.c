#include <stdio.h>

int main()
{
    
    int num,tempnum,flag=0;
    printf("enter the num");
    scanf("%d",&num);
    tempnum=num;
    while(tempnum!=1)
    {
        if(tempnum%2!=0)
        flag=1;
    }
        tempnum=tempnum/2;
    
    if(flag=0)
    printf("it is power of two");
    else
    printf("it is not power of 2 ");
    
    
    return 0;
}
