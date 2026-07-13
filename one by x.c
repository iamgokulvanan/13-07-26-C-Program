#include <stdio.h>
#include <math.h>
int main() {
int n,i=1;
float result=1;
printf("Enter the number:");
scanf("%d",&n);
print:
result = 1/pow(n,i);
printf("%f\t",result);
i=i+1;
if(i<=n)
goto print;
    return 0;
}
