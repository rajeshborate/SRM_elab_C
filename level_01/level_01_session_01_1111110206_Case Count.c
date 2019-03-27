#include <stdio.h>
int main()
{
  int upper=0,lower=0,i=0,special=0;
  char c[100];
  for(i=0;i<100;i++){
  scanf("%c",&c[i]);
  
  }
  for(i=0;c[i]!='\0';i++){
  if(c[i]>='A' && c[i]<='Z'){
    upper++;
  }
  else if(c[i]>='a' && c[i]<='z'){
    lower++;
  }
    else
      special++;
  
  }
  printf("Uppercase Letters=%d\n",upper);
   printf("Lowercase Letters=%d",lower);

	return 0;
}
