#include <stdio.h>
int main()
{
  int n,arr[10],f,i,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
	scanf("%d",&f);
  for(i=0;i<n;i++){
  if(arr[i]==f){
  count++;
  }
  }
  printf("%d",count);
	return 0;
}
