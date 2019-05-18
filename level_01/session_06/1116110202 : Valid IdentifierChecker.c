#include <stdio.h>
#include <string.h>
int main()
{
  char string[10];
  int count=0,flag=0,i;
  scanf("%s",string);
  if(string[0]=='_' || (string[0]>='0' && string[0]<='9')){
    printf("not a valid identifier");
    return 0;
  }
else if((string[0]>='a' && string[0]<='z')
   ||
   (string[0]>='A' && string[0]<='Z')
    ||
    (string[0]!='2')
   )
  for(i=0;i<strlen(string);i++){
  if((string[i]>='a'&&string[i]<='z')
    ||
    (string[i]>='A'&&string[i]<='Z')
     ||
     (string[i]>='0'&&string[i]<='9')
     ||
     (string[i]=='_')
     ||
     (string[i]=='-')
    ){
  count++;
  }
  }
    if(count==strlen(string))
      printf("valid identifier");
  else
    printf("not a valid identifier");
	return 0;
}
