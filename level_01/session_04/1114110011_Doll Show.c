#include <stdio.h>
int main()
{
int n;
  scanf("%d",&n);
  if(n<=100 && n!=0){
  if(n%2==0)
    printf("Doll will sing");
   else
     printf("Invalid Number");
  }
  else
  	printf("Invalid Number");
	return 0;
}
