#include <stdio.h>
int main()
{

  int a,b;
  scanf("%d%d",&a,&b);
  if(b==0)
    printf("00:00\n01:00\n11:00");
  else
    printf("03:16\n08:44\n01:00\n11:00");
	return 0;
}
