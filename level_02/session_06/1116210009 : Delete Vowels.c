#include <stdio.h>
#include <string.h>
int main()
{
  char str[50],strr[50];
  int length=0,count,a=0;
  scanf("%s",str);
  length=strlen(str);
  for(count =0;count<=length;count++){
  if((str[count]=='a'||str[count]=='e'||str[count]=='i'||str[count]=='o'||str[count]=='u'||str[count]=='A'||str[count]=='E'||str[count]=='I'||str[count]=='O'||str[count]=='U'))
  {
  str[count]=' ';
  }
    else 
      strr[a++]=str[count];
  }
  strr[a]='\0';
  printf("The output string is:%s",strr);

	return 0;
}
