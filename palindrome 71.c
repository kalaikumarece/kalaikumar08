#include <stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
printf("enter the string");
scanf("%s",a);
strcpy(b,a);
b=strrev(a);
if(strcmp(a,b)==0)
printf("yes");
else
printf("no");



    return 0;
}
