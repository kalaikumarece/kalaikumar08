#include <stdio.h>

int main()
{
int n,a[10],max,i;
printf("enter the no of elements");
pcanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }

    }printf("max element is %d",max);

    return 0;
}



