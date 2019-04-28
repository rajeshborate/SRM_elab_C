#include <stdio.h>
int main()
{
int i,j,row,a;
  scanf("%d",&row);
  a=row*2;
  for(i=a-1;i>=1;i-=2){
  for(j=1;j<=i;j++){
  printf("%d ",j);
  }
    printf("\n");
  }
	return 0;
}
