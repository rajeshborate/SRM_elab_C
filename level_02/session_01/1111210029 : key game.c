#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(c>=a && c>=b)
  { if(c%a==0 && c%b==0)
    printf("strong");
  
   else if(c%a==0 || c%b==0)
     printf("accept");
   else
     printf("reject");
  }
  else
    printf("impossible");
   

	return 0;
}
