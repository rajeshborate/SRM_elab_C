#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
char s[12];
  scanf("%s",s);
 
  long long int n,i,p=9,q=0,b=9,a;
    n=atoi(s);
    for(i=1;n>p;i++){
    q=p;
      p+=((p*pow(10,i))*(i+1));
      b+=(9*pow(10,i));
    }
    a=n-q;
    b/=10;
    if(a%i==0)
      printf("%lld\n",(a/i)+b);
    else
      printf("Impossible");
  
  return 0;
  
}
