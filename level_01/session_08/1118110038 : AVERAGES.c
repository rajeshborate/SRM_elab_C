#include <stdio.h>
int main()
{struct avg;
int n,arr[10],i;
  for(i=0;i<3;i++){
  scanf("%d",&arr[i]);
  }
  int sum=0;
  for(i=0;i<3;i++){
  printf("%d ",arr[i]);
    sum=sum+arr[i];
    
  }
  printf("%d",sum/3);
	return 0;
}
