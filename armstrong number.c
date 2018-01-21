
#include <stdio.h>
void main()
{
    int n, Number, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    originalNumber = n;

    while (Number != 0)
    {
        remainder = Number%10;
        result += remainder*remainder*remainder;
        Number /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    
}
