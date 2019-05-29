#include <stdio.h>
int main()
{
  int n,i,arr[20],search,flag=0,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  scanf("%d",&search);
  for(i=0;i<n;i++){
  if(arr[i]==search){
  flag=1;
    c=i;
  }
    
  
  }
  if(flag==1){
  printf("%d is found in the array at position=%d",search,c);
  }
  else
    printf("%d Does not exist in the array",search);
    
    
    return 0;
}
