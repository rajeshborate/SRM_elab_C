#include <stdio.h>
int main()
{
int n,arr[10],i,j,temp;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
  
  for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
  if(arr[i]>arr[j]){
  temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  }
  }
  for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
	
  
  return 0;
}
