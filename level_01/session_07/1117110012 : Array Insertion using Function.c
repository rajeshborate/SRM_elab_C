#include <stdio.h>

int main(){
int n,arr[20],place,element,i,lar;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  scanf("%d",&place);
  scanf("%d",&element);
  lar=arr[place-1];
  
  for(i=0;i<n;i++){
    if(place>n){
    printf("Sorry Invalid Location");
      break;
    }
  else if(i<place-1){
  printf("%d\n",arr[i]);
  }
    else if(i==place-1){
    printf("%d\n",element);
      printf("%d\n",lar);
    
    }
    else{
      
    printf("%d\n",arr[i]);
    }
  }





return 0;

}
	
