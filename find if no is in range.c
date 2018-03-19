#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,r,i,flag=0;
    printf("enter number,range");
    scanf("%d %d %d",&n,&l,&r);
    for(i=l;i<r;i++)
    {
        if(i==n)
        flag=1;
    }
    if (flag=1)
    printf("yes");
        else
        printf("no");
    return 0;
    
}
