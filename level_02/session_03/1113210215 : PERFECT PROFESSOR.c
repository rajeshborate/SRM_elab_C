#include <stdio.h>
int main()
{
  int t,n,k,i,x,c;
  scanf("%d",&t);
  while(t--){
  c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
    scanf("%d",&x);
      if(x<=0)
        c++;
    }
    if(c>=k){
    printf("NO\n");
    }
    else
      printf("YES\n");
  }

	return 0;
}
