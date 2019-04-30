#include <stdio.h>
int main()
{
int n,i;
  char c[10];
  scanf("%[^\n]s",c);
  for(i=0;c[i]!='\0';++i);
  printf("%d",i);
	return 0;
}
