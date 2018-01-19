include <stdio.h>
int main()
{
    char s;
    printf("Enter a character: ");
    scanf("%c",&s);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet.",c);

    return 0;
}
