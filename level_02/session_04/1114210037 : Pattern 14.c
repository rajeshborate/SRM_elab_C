#include <stdio.h>
int main()
{
  int i,j,n,a;
  scanf("%d",&n);
  a=n*2;
  for(i=1;i<=a-1;i+=2){
  for(j=i;j<=a-1;j+=2){
  printf("%d ",j);
  }
    printf("\n");
  }

	return 0;
}
