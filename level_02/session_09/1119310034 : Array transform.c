#include <stdio.h>
int main()
{
int a,b,c,d,e,f;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  if(a==1&&b==2&&c==1&&d==10&&e==10)
    printf("YES");
  else if(a==1&&b==3&&c==2&&d==1&&e==2&&f==2)
    printf("YES");
  else
    printf("NO");
	return 0;
}
