#include <stdio.h>

int main() {
int n,i=1,result;
printf("Enter the number:");
scanf("%d",&n);
print:
result=i*n;
printf("%d x %d = %d\n",i,n,result);
i++;
if(i<=10)
goto print;
    return 0;
}
