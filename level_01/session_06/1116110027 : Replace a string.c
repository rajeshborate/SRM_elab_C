#include <stdio.h>
#include <string.h>

int main()
{
char s[10],a,b;
int i=0;
scanf("%s\n",s);
scanf("%c\n",&a);
scanf("%c\n",&b);
for(i=0;i<strlen(s);i++){
if(s[i]==a){
s[i]=b;
}}
  printf("%s",s);
 return 0;
}
