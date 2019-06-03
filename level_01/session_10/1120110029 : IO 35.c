#include <stdio.h>
int main()
{
  int n;
  float p;
  char c[100];
  scanf("%s",c);
  scanf("%f%d",&p,&n);
  printf("Product Details\n%s\n%.2f\n%d\nBill:%.2f",c,p,n,p*n);

	return 0;
}
