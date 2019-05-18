#include <stdio.h>
#include <string.h>
int main()
{
  char c[20];
  int i;
  scanf("%s",c);
  for(i=0;i<strlen(c);i++){
  printf("%c",c[i]-32);
  }

	return 0;
}
