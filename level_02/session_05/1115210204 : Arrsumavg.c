#include <stdio.h>
int main()
{
int n,arr[10],i;
  float sum=0,add=0,avg;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d\n",&arr[i]);
  }
  for(i=0;i<n;i++){
  if(arr[i]>0){
  sum=sum+arr[i];
  }
    else
      add=add+arr[i];
    
  }
  printf("%.0f\n%.0f",add,sum);
  avg=(add+sum)/n;
  printf("\n%.2f",avg);
	return 0;
}
