#include <stdio.h>
int main()
{	int h,min,sec;
 	int ho;
 	int mo;
 	scanf("%d%d%d",&h,&min,&sec);
 	ho=h*60*60;
 	mo=min*60;
 	int cal= ho+mo+sec;
 	printf("%d",cal);

	return 0;
}
