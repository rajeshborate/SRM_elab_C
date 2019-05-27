#include <stdio.h>
#include <math.h>
struct EMI{
float principal,rate,time;
};
int main()
{
  struct EMI e;
  scanf("%f%f%f",&e.principal,&e.rate,&e.time);
float total;
  e.rate=e.rate/(12*100);
  e.time=e.time*12;
  total=(e.principal*e.rate*pow(1+e.rate,e.time))/(pow(1+e.rate,e.time)-1);
  printf("Monthly EMI is=%.2f",total);
	return 0;
}
