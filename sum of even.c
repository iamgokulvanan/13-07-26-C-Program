#include <stdio.h>

int main() {
int n,i=2,sum=0;
printf("Enter the number:");
scanf("%d",&n);
print:
sum=sum + i;
i=i+2;
if(i<=n)
goto print;
printf("Sum:%d",sum);
    return 0;
}
