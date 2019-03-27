#include <stdio.h>
#include <math.h>
int main()
{
  int p,c,result;
  scanf("%d",&p);
  scanf("%d",&c);
  
  if(p>=50 && c>=50 && c>=p){
  result=c-p;
    printf("Your age is %d",result);
  }
  else if(p<50 && c<50){
  result=(100-p+c)%100;
    printf("Your age is %d",result);
    
  }
  else if(p>=50 && c<50){
  result=100-p+c;
    printf("Your age is %d",result);
  }
  else
    printf("Your age is %d",c-p);

	return 0;
}
