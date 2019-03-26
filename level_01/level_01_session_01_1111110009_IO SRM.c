#include <stdio.h>
int main()
{
  char name[30], place[30], dept[30];
  int age;
  scanf("%s%d%s%s",name,&age,place,dept);
  printf("Name:%s\nAge:%d\nPlace:%s\nDepartment:%s\n",name,age,place,dept);
  

	return 0;
}
