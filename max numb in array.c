#include<stdio.h>

void main()
{
 array[100], *maximum, size, c, l= 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%ld", &size);
 
  printf("Enter %ld integers\n", size);
 
  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &array[c]);
 
  maximum  = array;
  *maximum = *array;
 
  for (c = 1; c < size; c++)
  {
    if (*(array+c) > *maximum)
    {
       *maximum = *(array+c);
       l= c+1;
    }
  }
 
