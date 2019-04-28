#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a=11,i;
  for(i=0;i<n;i++){
  printf("%d ",a*a);
    a+=4;
  }
	return 0;
}
