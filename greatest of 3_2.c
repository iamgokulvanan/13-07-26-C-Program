#include<stdio.h>
int main()
{
    int a,b,c,result;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    result =a>b && a>c ? 1:b>c?2:3;
    switch(result){
case 1:
    printf("a is greatest");
    break;
case 2:
    printf("b is greatest");
    break;
default:
    printf("c is greatest");
}
return 0;
}
