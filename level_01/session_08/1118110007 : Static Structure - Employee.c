#include <stdio.h>
struct employee{
char name[20];
  int empid;
  float salary;

};


int main()
{ struct employee emp;
 scanf("%s",emp.name);
 scanf("%d%f",&emp.empid,&emp.salary);
 printf("%s\n%d\n%.f",emp.name,emp.empid,emp.salary);

	return 0;
}
