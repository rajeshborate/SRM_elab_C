#include <stdio.h>
#include <stdlib.h>
#define mod 10000000
int main()
{
  int t,n,sum,value[1000],i,j;
  long long dp[10001],total;
  scanf("%d",&t);
  while(t--){
  scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++){
    scanf("%d",&value[i]);
      sum+=value[i];
    }
    for(i=0;i<=sum;i++)
      dp[i]=0;
    dp[0]=1;
    
    for(i=0;i<n;i++)
      for(j=sum;j>=0;j--)
        if(dp[j]>0)
          dp[j+value[i]]=((dp[j+value[i]])+(dp[j]))%mod;
    total=0;
    for(i=0;i<=sum;i++)
      if(dp[i]>0){
      long long inc=((long long)((((long long)abs(sum-2*i)))*(dp[i])))%mod;
      total=(total+inc)%mod;
      }
    printf("%lld\n",total);
  }

	return 0;
}
