#include <stdio.h>
int main()
{
	float a,b,c;
  scanf("%f",&a);
	scanf("%f",&b);  
  c=a*b;
  printf("The Multiplication of two number is:%f",c);
  printf("\nThe Multiplication of two number is:%.2f",c);
  
	return 0;
}