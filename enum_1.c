#include<stdio.h>
enum day{
MON,
TUE,
WED,
THU,
FRI,
SAT,
SUN
};
int main()
{
    enum day today = WED;
    printf("%d",today);
    return 0;
}
