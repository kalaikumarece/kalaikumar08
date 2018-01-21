#include<stdio.h>
void main() 
{
    int array[100], minimum, size, c, l = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array;
  
  for ( c = 1 ; c < size ; c++ ) 
    {
        if ( (array+c) < minimum ) 
        {
           minimum = (array+c);
           l = c+1;
        }
    } 
 
    printf("Minimum element found at location %d and it's value is %d.\n", l, minimum);
    return 0;
}
