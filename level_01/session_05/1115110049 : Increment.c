#include <stdio.h>
int main()
{
  int n,arr[20],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
  printf("%d ",arr[i]+1);
  }
  
  

	return 0;
}