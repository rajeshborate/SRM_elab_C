#include <stdio.h>
struct Year{
int date,year,month;
};
int main()
{ struct Year s1;
 int date,year,month;
 scanf("%d%d%d",&s1.date,&s1.month,&s1.year);
 printf("Date=%d\nMonth=%d\nYear=%d\n",s1.date,s1.month,s1.year);
 if(s1.year%4==0){
   if(s1.year%100==0){
   if(s1.year%400==0)
   printf("%d is a leap year",s1.year);
   else
   printf("%d is not a leap year",s1.year);
   }
   else
   printf("%d is a leap year",s1.year);
 }
 else
 printf("%d is not a leap year",s1.year);

	return 0;
}
