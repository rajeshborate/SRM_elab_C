#include <stdio.h>
int main()
{
  int a,b,i,count=0,arr[20],sum=0;
  scanf("%d%d",&a,&b);
  for(i=a;i<b;i++){
  if(a%5==0){
  count++;
    sum=sum+a;
  }
  a++;
  }
  printf("%d %d",count,sum);

	return 0;
}
