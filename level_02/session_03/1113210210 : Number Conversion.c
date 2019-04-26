#include <stdio.h>
int main()
{
  int n;
  char c[1];
  scanf("%c",c);
  if(c[0]=='a')
    printf("10");
  else if(c[0]=='b')
    printf("11");
  else if(c[0]=='c')
    printf("12");
  else if(c[0]=='d')
    printf("13");
  else if(c[0]=='e')
    printf("14");
  else if(c[0]=='f')
    printf("15");
  else
    printf("%c",c[0]);

	return 0;
}
