#include<stdio.h>
void main()
{
char ch;
int flag=0;
scanf("%c",&ch);
for(int i=48;i<=57;i++)
{
	if(ch==i)
	{ flag=1; //If it is an Integer it must have ASCII value between 48-57
		break;
	}}
