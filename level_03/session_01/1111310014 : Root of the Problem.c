#include <stdio.h>
int main()
{
int t;
  scanf("%d",&t);
  while(t--){
  int n,i,j,c1[2]={0};
    int a[30][2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<2;j++){
    scanf("%d",&a[i][j]);
      c1[j]+=a[i][j];
    }
    }
    printf("%d\n",c1[0]-c1[1]);
  }
	return 0;
}
