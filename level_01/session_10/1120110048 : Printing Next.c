#include <stdio.h>
#include <string.h>
int main()
{
  char c[10];
  int i,len;
 scanf("%s",c);
  len=strlen(c);
  for(i=0;i<len;i++){
  printf("%c",c[i]+1);
  }
  

	return 0;
}
