#include <stdio.h>
#include <string.h>
int main()
{
  int i,j,k,l,m,n,o,p,t,len[15],flag,s,z,key,min;
  char a[15][25],ans[25],aa[25];
  scanf("%d",&t);
  for(z=1;z<=t;z++){
  flag=s=0;
    min=1000;
    for(i=0;i<=24;i++){
    ans[i]='\0';
    }
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
    scanf("%s",a[i]);
      m=strlen(a[i]);
      len[i]=m;
      if(m<min){
      min=m;
        key=i;
        
      }
    }
    for(i=min;i>=1;i--){
    for(j=0;j<=min-i;j++){
    l=j;
      k=0;
      while(k<=i-1){
      aa[k]=a[key][l];
        k++;
        l++;
        
      }
      aa[k]='\0';
      for(o=0;o<=n-1;o++){
      flag=0;
        for(p=0;p<=len[o]-i;p++){
        if(strcmp(&a[o][p],aa)==a[o][p+i]){
        flag=1;
          break;
        }
        }
        if(flag==0)
          break;
        
      }
      if(flag==1){
      s=1;
        if(strlen(ans)==0){
        strcpy(ans,aa);
        }
        else{
        if(strcpy(ans,aa)>0)
          strcpy(ans,aa);
        }
      }
    }
      if(s==1)
        break;
    }
    printf("%s",ans);
  }

	return 0;
}