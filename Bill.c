#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n>0 && n<200)
    {
    case 1:
        printf("Bill 3");
        break;
    default:
        printf(n>200 && n<500 ? "Bill 4" :n>=500 && n<1000?"Bill 5":"Bill 10");
        break;
    }

    return 0;
}
