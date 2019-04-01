#include <stdio.h>
int main()
{
  int a,b,c,gain;
  float v,d;
  scanf("%d%d%d",&a,&b,&c);
  d=a+b;
  gain=c-d;
 // printf("%d",gain);
 
  v=gain/d*100;
;  printf("The gain percentage is=%.2f",v);

	return 0;
}
