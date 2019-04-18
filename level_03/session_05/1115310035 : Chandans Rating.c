#include <stdio.h>
int main()
{
int n;
  scanf("%d",&n);
  int temp,sum=0,arr[20],i=1;
  while(n--){
  scanf("%d",&temp);
    arr[i]=temp;
    if(i==1&&temp==0)
      continue;
    else if(i>1&&temp==0){
    i=i-1;
      sum=sum-arr[i];
      continue;
      
    }
    else
    {
    i=i+1;
      sum=sum+temp;
    }
  }
  printf("%d",sum);
	return 0;
}
