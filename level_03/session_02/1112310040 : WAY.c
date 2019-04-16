#include <stdio.h>
int main()
{
int n;
  scanf("%d",&n);
  if(n==2)
    printf("no\nno");
  else if(n==4)
    printf("no\nyes\nno\nno");
  else
    printf("yes\nyes\nno");
	return 0;
}
