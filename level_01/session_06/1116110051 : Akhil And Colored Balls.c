#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int t,i,k;
  scanf("%d",&t);
  for (i=0;i<t;i++)
  {
    int j,n;
    char dummy[10];
    char x[100000],y[100000],z[100000];
    if(i==0) 
    scanf("%s",x);
    scanf("%s",y);
    
   // puts(x);
   //puts(y);

    n=strlen(x);

    for(j=0;j<n;j++)
    {
      if(x[j]==y[j])
      {
        if(x[j]=='W') z[j]='B';
        if(x[j]=='B') z[j]='W';
      }
      
     else  z[j]='B';
    }

    puts(z);

  }
  return 0;
}
