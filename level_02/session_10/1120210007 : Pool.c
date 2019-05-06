#include <stdio.h>
int main()
{
float r,s,i,j;
  scanf("%f\n%f",&r,&s);
  i=22/7*r*r;
  j=s*s;
  if(i>j)
    printf("I prefer centre 1");
  else 
    printf("I prefer centre 2");
	return 0;
}
