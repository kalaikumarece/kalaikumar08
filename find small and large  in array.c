
int main()
{
    int ar[100], n, i, small, large;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &ar[i]);
    }

    small = ar[0];
    large = ar[0];

    for (i = 1; i < n; i++)
    {
        if (ar[i] < small)
        {
            small = ar[i];
        }
        
        if (ar[i] > large)
        {
            large = ar[i];
        }
    }

    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);

    return 0;
}
