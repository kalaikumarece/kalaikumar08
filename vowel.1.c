#include<stdio.h>
#include<string.h>
void main()
{
    char c[10]={'a','e','i','o','u'},b[10];
    int flag=0,i,j;
    printf("enter the string");
    scanf("%s",b);
    for(i=0;b[i]!=NULL;i++)
    {
        for(j=0;j<10;j++)
        {
            if(c[j]==b[i])
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("yes");
    else 
    pirntf("no");
}
