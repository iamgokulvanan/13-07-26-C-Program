#include <stdio.h>
int main()
{
  int l,m,n,o,p,avg,avg1;
  printf("Enter the 5 SUBJECT MARKS:");
  scanf("%d%d%d%d%d",&l,&m,&n,&o,&p);
  avg=l+m+n+o+p;
  avg1=avg/5;
  if(avg1>=50)
  {
      printf("Pass");
  }
  else{
    printf("Fail");
  }
  return 0;
}
