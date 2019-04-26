#include <stdio.h>
#include <math.h>
int check(int i,int j,int k);
float inrad(int i,int j,int k);
int main()
{
int r;
  scanf("%d",&r);
  int i,j,k,c;
  int ans[100][3];
  c=0;
  for(i=2*r+1;i<50*r;i++){
  for(j=i;j<50*r;j++){
  for(k=j;k<50*r;k++){
  if(check(i,j,k)){
  if(inrad(i,j,k)==(float)(r)){
  ans[c][0]=i;
  ans[c][1]=j;
  ans[c][2]=k;
    c++;
  }
  }
  }
  }
  }
  printf("%d\n",c);
  for(i=0;i<c;i++){
  printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
  }
	return 0;
}
int check(int i,int j,int k){
if(((i+j)>k)&&((i+k)>j)&&((k+j)>i))
  return 1;
  else return 0;
}
float inrad(int i,int j,int k){
float s;
  s=((i+j+k)*1.0)/2.0;
  float delta=sqrt(s*(s-i)*(s-j)*(s-k));
  float k1=delta/s;
  return k1;
  
}
