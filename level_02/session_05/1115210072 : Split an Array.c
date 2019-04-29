#include <stdio.h>
int main()
{
  int n,arr[10],e,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  scanf("%d",&e);
  for(i=0;i<e;i++){
  arr[n]=arr[0];
    for(j=0;j<n;j++){
    arr[j]=arr[j+1];
    }
  }
for(i=0;i<n;i++)
  printf("%d\n",arr[i]);
	return 0;
}
