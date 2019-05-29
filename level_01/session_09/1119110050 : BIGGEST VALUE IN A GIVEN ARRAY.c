#include <stdio.h>
int main()
{
int arr[10],i,lar,n;
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
  printf("%d",lar);
	return 0;
}
