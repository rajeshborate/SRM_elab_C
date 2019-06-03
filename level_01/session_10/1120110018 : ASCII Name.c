#include <stdio.h>
int main()
{
  char c[100];
  int i;
  
  scanf("%s",c);
  
  while(c[i]!='\0'){
  printf("%d ",c[i]);
    i++;
  }

	return 0;
}
