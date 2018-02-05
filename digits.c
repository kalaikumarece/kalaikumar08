#include<stdio.h>
int main()
[
charstr[100];
int counter i,n,digits;
printf("enter the char");
scanf("%s",str);
for(counter=0;str[counter]!=0;counter++)
{
if(str[counter]>="0"&&str[counter]<="9")
digits++;
}
printf("digits %d",digits);
return 0;
}
