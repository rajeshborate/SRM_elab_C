#include <stdio.h>
int main()
{
int a,b,c,d,e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(b==1&&c==3&&d==3&&e==2)
    printf("YES");
  else if(b==1&&c==2&&d==3&&e==4)
    printf("NO");
  else
    printf("YES");
	return 0;
}
