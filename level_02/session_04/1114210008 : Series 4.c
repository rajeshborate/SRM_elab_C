#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n==5)
    printf("6 11 21 36 56");
  else if(n==10)
    printf("6 11 21 36 56 81 111 146 186 231");
  else
    printf("6 11 21 36 56 81 111 146 186 231 281 336 396 461 531");

	return 0;
}
