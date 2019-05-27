#include <stdio.h>
struct fraction{
float numerator,denominator;
};

int main()
{
  
  float a,b,c,d,i,j;
  scanf("%f%f%f%f",&a,&b,&c,&d);
  i=a/b;
  j=c/d;
  if(i>j)
    printf("%.f/%.f is greater than %.f/%.f",a,b,c,d);
  else
    printf("%.f/%.f is smaller than %.f/%.f",a,b,c,d);

	return 0;
}
