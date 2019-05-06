#include <stdio.h>
int main()
{
  char name[10];
  int age;
  float marks;
  int year;
  scanf("%s",name);
  scanf("%d\n%f\%d",&age,&marks,&year);
  printf("Name:%s\nAge:%d\nPercentage:%f\nYear of Passing:%d",name,age,marks,year);

	return 0;
}
