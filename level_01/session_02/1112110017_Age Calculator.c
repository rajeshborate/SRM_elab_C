#include <stdio.h>
int main()
{
int a,b;
  float avg;
  scanf("%d",&a);
  scanf("%d",&b);
  printf("I am:%d",a);
  printf("\nYou are:%d",b);
  avg=(a+b)/2;
  printf("\nWe are around:%.2f",avg);
	return 0;
}
