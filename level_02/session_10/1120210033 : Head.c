#include <stdio.h>
int main()
{int n,arr[10],i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%d",&arr[i]);  
 }
 int lar=arr[0];
 for(i=0;i<n;i++){
 if(arr[i]>lar)
   lar=arr[i];
 }
 printf("%d",lar);

	return 0;
}
