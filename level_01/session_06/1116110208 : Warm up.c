#include <stdio.h>
int main()
{
int t;
  scanf("%d",&t);
  while(t--){
  char str[55];
    scanf("%s",str);
    int i=0,j=0,freq[200];
    for(i=0;i<200;++i){
    freq[i]=0;
      
    }
    for(i=0;str[i];++i){
    freq[str[i]]++;
      
    }
    for(j=0;j<200;++j){
    if(2*freq[j]==i){
    printf("YES\n");
      break;
    }
    }
    if(j==200){
    printf("NO\n");
    }
  }
	return 0;
}
