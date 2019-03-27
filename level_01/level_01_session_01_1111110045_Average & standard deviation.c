#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,sum=0,arr[10];
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
  sum=sum+arr[i];
  }
  float avg;
  avg=(float)sum/(float)n;
  printf("Mean=%.2f",avg);
  float sd,sums=0,a,b;
  for(i=0;i<n;i++){
  b=arr[i]*arr[i];
    sums = sums + pow((arr[i] - avg), 2);
  }
  a=sums/n;
  sd=sqrt(a);
  printf("\nSD=%.2f",sd);
  
  
  
  
	return 0;
}
