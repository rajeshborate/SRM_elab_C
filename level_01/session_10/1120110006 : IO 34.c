#include <stdio.h>
int main()
{
  float basic,hra,da,bonus,sum;
  scanf("%f",&basic);
  hra=basic*0.8;
  da=0.4*basic;
  bonus=hra*0.25;
  sum=basic+hra+da+bonus;
  printf("Total Salary=%.2f",sum);
  

	return 0;
}
