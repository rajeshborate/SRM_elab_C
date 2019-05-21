#include <stdio.h>
int main()
{int n;
long long int a,b,i,j,v,k;
scanf("%lld",&a);
 if(a%2==0){
 i=((a/2)*(a/2))-1;
   j=i+2;
 }
 else
 {
 i=((a*a)-1)/2;
   j=i+1;
   
 }
 if(i==0 || j==0){
 printf("-1\n");
 }
 else{
printf("%lld %lld",i,j); 
 }
    
    return 0;
}
