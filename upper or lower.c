 #include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(isupper(c))
    {
        printf("This is uppercase");
    }
    else{
        printf("This is lowercase");
    }
    return 0;
}
