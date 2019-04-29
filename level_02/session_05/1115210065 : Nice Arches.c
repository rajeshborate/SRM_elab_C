#include <stdio.h>
int main()
{
  int n,count=0,i;
  scanf("%d",&n);
  while(n--){
  char s[100000];
    char stack[100000];
    int top=-1;
    stack[++top]='c';
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
    if(stack[top]==s[i]) top--;
      else stack[++top]=s[i];
    }
    if(stack[top]=='c') count++;
  }
printf("%d",count);
	return 0;
}
