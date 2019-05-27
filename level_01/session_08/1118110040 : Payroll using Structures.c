#include <stdio.h>
struct employee{
char name[20];
  int empid,salary,hra,da;
  float total;
};
int main()
{
  struct employee emp;
  scanf("%s",emp.name);
  scanf("%d%d",&emp.empid,&emp.salary);
  printf("Name=%s",emp.name);
  int hra,da;
  hra=emp.salary*0.1;
  da=emp.salary*0.2;
  printf("\nId=%d",emp.empid);
  printf("\nHRA=%d",hra);
  printf("\nDA=%d",da);
  printf("\nTotal Salary=%d",emp.salary+hra+da);

	return 0;
}
