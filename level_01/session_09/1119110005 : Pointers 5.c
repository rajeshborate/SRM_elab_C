#include <stdio.h>
int main()
{
  int *ptr;
  int n,arr[20],i,lar;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  lar=arr[0];
  for(i=0;i<n;i++){
  if(arr[i]>lar){
  lar=arr[i];
    
  }
  }
  printf("%d is largest",lar);

	return 0;
}
