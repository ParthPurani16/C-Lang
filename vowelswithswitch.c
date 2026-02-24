#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter ch:");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n Vowle");
        break;
    default:
        printf("Consonent");
        break;
    }
    return 0;
}