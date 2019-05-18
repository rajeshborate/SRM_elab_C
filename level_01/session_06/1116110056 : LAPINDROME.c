#include <stdio.h>
#include <string.h>

int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
  char c[1005];
    scanf(" %s",c);
    int x=strlen(c),m,z,l=0;
    if(x%2==0)
      m=x/2;
    else
      m=x/2+1;
    int i=0,n=0;
    while(i<x/2){
    z=m;
      l=0;
      while(z<x){
      if(c[i]==c[z]){
      c[z]='0';
        n++;
        l=1;
        break;
      }
        z++;
        
      }
      if(l==0)
        break;
      i++;
      
    }
    if(n==x/2)
      printf("YES\n");
    else
      printf("NO\n");
    
  }
	return 0;
}


