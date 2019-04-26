#include <stdio.h>
int main()
{
int t;
  scanf("%d\n",&t);
  while(t--){
  long int n,i;
    char a[100000];
    scanf("%ld\n",&n);
    
    
    for(i=0;i<n;i++){
    scanf("%c\n",&a[i]);
    }
    int z=0;
    for(i=0;i<n;i++){
    if(a[i]=='1')
      z++;
    }
    printf("%d\n",z);
  }
  
	return 0;
}
