#include <stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(c>='A' && c<='Z')
    printf("Input is upper case\nLower case=%c",c+32);
  else
    printf("Input is lower case\nUpper case=%c",c-32);

	return 0;
}
