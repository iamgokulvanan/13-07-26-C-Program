#include<stdio.h>
int main()
{
    char c;
    printf("Enter Character:");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is a vowel char");
        break;
    default:
    printf("Not a vowel");
    }

    return 0;
}
