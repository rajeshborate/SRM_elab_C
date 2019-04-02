#include <stdio.h>
int main()
{
int n;
  float h,hr,d,da;
  scanf("%d",&n);
  int arr[10],i;
  for(i=0;i<10;i++){
  scanf("%d",&arr[i]);
  }
  
  for(i=0;i<n;i++){
  if(arr[i]<1500){
  	h=arr[i]*0.1;
    d=arr[i]*0.9;
    printf("%.2f\n",arr[i]+h+d);
   
    
  }
    else{
      h=500;
    d=arr[i]*0.98;
    printf("%.2f\n",arr[i]+h+d);
   
    
    }
  }
  
  return 0;
}
