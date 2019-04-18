#include <stdio.h>
int main()
{
int n,arr[15],i,j,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d\n",&arr[i]);
  }
  for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
  if(arr[i]>arr[j]){
  a=arr[i];
    arr[i]=arr[j];
    arr[j]=a;
  }
  }
  }
  for(i=0;i<n;i++){
  printf("%d ",arr[i]);
  }
	return 0;
}
