#include <stdio.h>
int main()
{
	int n,rem;
  scanf("%d",&n);
  while(n!=0){
  rem=rem+n%10;
    n=n/10;
  }
  printf("%d",rem);
	return 0;
}
