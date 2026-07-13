#include<stdio.h>
int main()
{

    int i=1,n=5,sum=0;
    print:
        sum=sum+i;
        i++;
        if(i<=n)
            goto print;
        printf("%d",sum);
        return 0;
}
