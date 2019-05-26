#include <stdio.h>
int power(int a,int b);
int main()
{
int n,p;
  float f;
  scanf("%d%d",&n,&p);
  power(n,p);
  
	return 0;
}
int power(int n,int p){
float f,sum=1;
  int i;
  for(i=1;i<=p;i++){
  sum=sum*n;
  }
  printf("%.2f",sum);
}
