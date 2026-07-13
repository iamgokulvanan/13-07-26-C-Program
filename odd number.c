#include <stdio.h>
int main()
{

    int i=1,n=10;
    print:
        printf("%d",i);
        i=i+2;
        if(i<=n)
            goto print;
        return 0;
}
