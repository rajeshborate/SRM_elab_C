#include <stdio.h>
int main()
{
  int n,arr[20],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  int largest;
  largest=arr[0];
  for(i=0;i<n;i++){
  if(arr[0]<arr[i])
    arr[0]=arr[i];
  
  }
  printf("%d is the maximum element in the array",arr[0]);

	return 0;
}
