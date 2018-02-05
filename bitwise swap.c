#include<stdio.h>

int main()
int i=65;
int k=100;
printf("before swap %d %d",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("value after swap is i=%d k=%d",i,k);
}
