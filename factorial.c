#include <stdio.h>

int main() {
int n,i=1,fact=1;
printf("Enter the number:");
scanf("%d",&n);
print:
fact=fact*i;
i=i+1;
if(i<=n)
goto print;
printf("Factorial: %d",fact);
    return 0;
}
