#include <stdio.h>
int main()
{
int n;
  scanf("%d",&n);
  if(n==1||n==3||n==5||n==7||n==12||n==8||n==10)
    printf("31");
  else if(n==2)
    printf("28 or 29");
  else 
    printf("30");
	return 0;
}