#include <stdio.h>

int main()
{
int f=0,s=1,n,next,i;
printf("enter no of elements");
scanf("%d",&n);
printf("%d,%d,",f,s);
for(i=0;i<n;i++)
{
 next=f+s;
 f=s;
 s=next;

printf("%d,",s);
}

    return 0;
}
