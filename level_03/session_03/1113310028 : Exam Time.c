#include <stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--){
  int n,i;
    scanf("%d",&n);
    int result=n;
    for(i=2;i*i<=n;i++){
    if(n%i==0) result-=result/i;
      while(n%i==0) n/=i;
      
    }
    if(n>1) result-=result/n;
    printf("%d\n",result);
  }

	return 0;
}
