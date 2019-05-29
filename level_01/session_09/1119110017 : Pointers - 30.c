#include <stdio.h>
#include <string.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(c>='A' &&c<='Z')
    printf("Upper case character was entered\n%c",c);
  else
    printf("Lower case character was entered\nUpper case=%c",c-32);

	return 0;
}
