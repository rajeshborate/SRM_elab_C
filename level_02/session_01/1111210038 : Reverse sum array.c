#include <stdio.h>
int main()
{
int i,n,arr[25],sum=0,rev=0,a,b;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
  sum=sum+arr[i];
  }
  for(i=0;i<n;i++){
  printf("a[%d]=%d\n",i,arr[i]);
  }
  a=sum;
  while(a!=0){
	b=a%10; 
    rev=rev*10+b;
    a=a/10;
    
  }
  
  
  printf("Sum=%d rev=%d",sum,rev);
  
	return 0;
}
