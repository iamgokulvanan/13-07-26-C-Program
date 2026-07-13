#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%7)
    {
    case 0:
        printf("Multiple");
        break;
    default:
        printf("Not a multiple");
    }
    return 0;
}
