#include <stdio.h>
int root(int a[],int i);
void Union(int a[], int size[],int A, int B);
void init(int a[], int size[],int n);

int main()
{
  int n,m1,m2;
  scanf("%d",&n);
  scanf("%d",&m1);
  int a[100001],size[100001];
  init(a,size,n);
  int i,x,y;
  for(i=0;i<m1;i++){
  scanf("%d%d",&x,&y);
    Union(a,size,x-1,y-1);
    
  }
  scanf("%d",&m2);
  for(i=0;i<m2;i++){
  scanf("%d%d",&x,&y);
    int rootX=root(a,x-1);
    int rootY=root(a,y-1);
    if(rootX==rootY){
    size[rootX]=0;
    }
  }
  int sum=0;
  for(i=0;i<n;i++){
  int r=root(a,i);
    sum=(sum>size[r]?sum:size[r]);
    
  }
  printf("%d",sum);

	return 0;
}
int root(int a[],int i){
while(a[i]!=i){
a[i]=a[a[i]];
  i=a[i];
}
  return i;
}
void Union(int a[],int size[],int A,int B){
int rootA=root(a,A);
  int rootB=root(a,B);
  if(rootA==rootB)return;
  if(size[rootA]>size[rootB]){
  a[rootB]=a[rootA];
    size[rootA]+=size[rootB];
  }
  else{
  a[rootA]=a[rootB];
    size[rootB] += size[rootA];
  }
  

}
void init(int a[],int size[],int n){
int i;
  for(i=0;i<n;i++){
  a[i]=i;
    size[i]=1;
  }
}
