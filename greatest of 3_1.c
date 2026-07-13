#include<stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    temp = a>b && a>c;
    switch(temp)
    {
    case 1:
        printf("a is greatest");
        break;
    default:
       printf(b>c ? "b greatest" : "c greatest");
    }
    return 0;


}
