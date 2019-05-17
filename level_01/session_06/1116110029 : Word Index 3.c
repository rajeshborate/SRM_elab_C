#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
struct word{
char c[10];
};
int main()
{
  int i,j,found;
  int strlenn,wordlenn;
  char str[100],word[100];
  scanf("%[^\n]s",str);
  scanf("%s",word);
  strlenn=strlen(str);
  wordlenn=strlen(word);
  
  for(i=0;i<=strlenn-wordlenn+1;i++){
  found=1;
    for(j=0;j<wordlenn;j++){
    if(str[i+j] != word[j]){
    found=0;
      break;
    }
    }
    if(found==1)
    {
    printf("%d\n",i);
    }
  }  
  

	return 0;
}
