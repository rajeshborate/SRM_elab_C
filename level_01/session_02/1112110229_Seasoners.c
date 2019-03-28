#include <stdio.h>
int main()
{
 char month[3];
  int n;
  scanf("%s",month);
  scanf("%d",&n);
 if(strcmp(month,"Mar")==0 && n>19)
    printf("Summer");
  else if(strcmp(month,"Jun")==0 && n<21)
    printf("Summer");
  else if(strcmp(month,"Apr")==0 || strcmp(month,"May")==0 )
    printf("Summer");
  else if(strcmp(month,"Jun")==0 && n>=21)
    printf("Spring");
  else if(strcmp(month,"Sep")==0 && n<=21)
    printf("Spring");
  else if(strcmp(month,"Jul")==0 || strcmp(month,"Aug")==0 )
    printf("Spring");
  else if(strcmp(month,"Sep")==0 && n>=22)
    printf("Fall");
  else if(strcmp(month,"Dec")==0 && n<=20)
    printf("Fall");
  else if(strcmp(month,"Oct")==0 || strcmp(month,"Nov")==0 )
    printf("Fall");
  else if(strcmp(month,"Dec")==0 && n>=21)
    printf("Winter");
  else if(strcmp(month,"Mar")==0 && n<=20)
    printf("Winter");
  else 
    printf("Winter");
  
  
  

	return 0;
}
