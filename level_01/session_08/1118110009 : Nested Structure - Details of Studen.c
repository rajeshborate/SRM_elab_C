#include <stdio.h>
struct student{

  struct dateOfBirth{
  int date,month,year;
  }DOB;
  char name[20];
  int rollno;
}std;
int main()
{
  scanf("%s",std.name);
  scanf("%d",&std.rollno);
  scanf("%d%d%d",&std.DOB.date,&std.DOB.month,&std.DOB.year);
	printf("Name=%s\n",std.name);
  printf("RollNo=%d\n",std.rollno);
  printf("Date of birth=%d/%d/%d",std.DOB.date,std.DOB.month,std.DOB.year);
	return 0;
}
