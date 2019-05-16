#include<stdio.h>
#include<math.h>


long long int A[1100];

int main()
 { long long int i,j,t,d,s,n,z,x;
   
   
  
  
    scanf("%lld",&n);
    if(n==1)
        printf("-1\n");
       
       else{   
     s=z=0;
     x=0;  
    
    for(j=0;j<n;j++)
    {scanf("%lld",&d);
     A[d]=A[d]+1;}
       
      /*for(j=1;j<=20;j++)
      printf("%lld ",A[j]);
      printf("\n");*/ 
    
    for(j=1;j<=1000;j++)
    { if(A[j]>=2)
     {s=z;
      z=j;}
     
     if(A[j]>=4)
     x=j;    
        
    }
    
    /*if(s==1 && A[s]<2)
    { if(A[z]>=4)    
       s=z;
      
    }*/
           
       
    if(A[s]>=2 && A[z]>=2 && (s*z)>=(x*x) && s!=z)
    printf("%lld\n",s*z);
    else if((x*x)>(s*z))
    printf("%lld\n",x*x);    
    else
    printf("-1\n");
    
    for(j=1;j<=1000;j++)   
    A[j]=0;
    }     
      
    return 0;
 } 
