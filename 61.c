
#include <stdio.h>

int main()
{
    int n,i;
    char a[10];
    printf("enter the word\n");
    gets(a);
printf("how many letters u want to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("%c",a[i]);
 }
    return 0;
}
