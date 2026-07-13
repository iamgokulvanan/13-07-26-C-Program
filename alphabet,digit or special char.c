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
    else if(isdigit(c)) {
        printf("This is Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
