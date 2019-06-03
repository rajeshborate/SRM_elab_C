#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i,j,len;
 
 scanf("%s\n",str);
 
  scanf("%c\n",&ch);
  len=strlen(str);
  for(i=0;i<len;i++){
  if(str[i]==ch){
  continue;
  }
    else
      printf("%c",str[i]);
  }
    
  
  
 
  
  return 0;
}
