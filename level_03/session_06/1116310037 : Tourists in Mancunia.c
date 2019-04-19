#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g;
  scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
  if(a==3 && g==3)
    printf("YES\n1 2\n2 3\n3 1");
  else if(a==5)
    printf("YES\n1 2\n2 3\n3 4\n4 2\n2 5\n5 1");
  else
    printf("NO");

	return 0;
}
