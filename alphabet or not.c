#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(isalpha(c))
    {
        printf("This is alphabet");
    }
    else{
        printf("Not a alphabet");
    }
    return 0;
}
