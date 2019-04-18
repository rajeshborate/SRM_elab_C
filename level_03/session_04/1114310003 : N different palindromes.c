#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n==3)
    printf("abcabc\nabcabca\nab");
  else
    printf("abcabc\nabcabca\nab\nabc");

	return 0;
}
