#include <stdio.h>
int main()
{
int arr[2],b,a,i,sum=0;
  float c,d,mat[25],m=0;
  for(i=0;i<2;i++){
    scanf("%d",&arr[i]);
  }
    
  	for(i=0;i<2;i++){
    scanf("%f",&mat[i]);
     
    }
   for(i=0;i<2;i++){
    sum=sum+arr[i];
     
   }
  printf("The Addition of two number is=%d",sum);
  for(i=0;i<2;i++){
    m=m+mat[i];
     
  }
  printf("\nThe Addition of two number is=%.1f",m);
  
	return 0;
}
