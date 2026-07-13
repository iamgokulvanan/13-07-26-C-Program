#include<stdio.h>
int main()
{
    int a,r,l,b,bt,ht,area;
    int n;
    printf("1.Square\n 2.Circle\n 3.Triangle\n 4.Rectangle");
    printf("\nEnter your choice:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Enter the side:");
        scanf("%d",&a);
        area=a*a;
        printf("Area:%d",area);
        break;
    case 2:
        printf("Enter the radius:");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("Area:%d",area);
        break;
    case 3:
        printf("Enter l and b:");
        scanf("%d%d",&l,&b);
        area =l*b;
        printf("Area:%d",area);
        break;
    case 4:
        printf("Enter the bt and ht:");
        scanf("%d%d",&bt,&ht);
        area =(bt*ht)*0.5;
        printf("Area:%d",area);
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
