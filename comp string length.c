#include<stdio.h>
#include<string.h>
void main()
{
int a,b;
char str1,str2;
printf("enter the string1");
scanf("%s",str1);
printf("enter the string2");
scanf("%s",str2);
a=strlen(str1);
b=strlen(str2);
if(a>b)
{printf("%s",str1);
}
elseif(a<b)
printf("%s",str2);
else
printf("%s,%s",str1,str2);
}
