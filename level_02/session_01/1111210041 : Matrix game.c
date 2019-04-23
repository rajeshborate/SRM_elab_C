#include <stdio.h>
int main()
{
	int r,c,m,i,j;
  
  int arr[25][25];
  scanf("%d",&r);
   scanf("%d",&c);
	m=r*c;
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
  scanf("%d",&arr[i][j]);
  }
  }
  int largest;
  largest=arr[0][0];
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
  if(largest<arr[i][j])
    largest=arr[i][j];
    }
  }
  for(i=0;i<r;i++){
  	for(j=0;j<c;j++){
    	printf("%d ",largest+arr[i][j]);
    }
    printf("\n");
    
  }
  
	return 0;
}
