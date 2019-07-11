//discouted Price

#include <stdio.h>
int main()
{
  float p=185;
  float dis=p*3/5;
  float n,a,b;
  scanf("%f",&n);
  a=p*n;
  b=dis*n;
  
  printf("Regular Price=%.f",a);
  printf("\nTotal Discount=%.f",b);
  printf("\nTotal Amount to be paid=%.f",a-b);

	return 0;
}
