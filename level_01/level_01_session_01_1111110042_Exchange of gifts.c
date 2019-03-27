#include <stdio.h>
int main()
{
int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  int x;
  x=-b/a;
  int y;
  y=b;
  int sum=x+y;
  printf("The line equation is y=%dx+%d",a,b);
  printf("\nThe x intercept is %d",x);
  printf("\nThe y intercept is %d",y);
  printf("\nThe house number is %d",sum);
	return 0;
}
