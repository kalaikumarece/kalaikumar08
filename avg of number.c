#include <stdio.h>

int main()
{
    
    int a[100], n, i,sum=0,avg;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("the avg is%d",avg);
    
    return 0;
}
