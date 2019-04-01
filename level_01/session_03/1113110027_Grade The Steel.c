#include <stdio.h>
int main()
{ int h[100],s[100];
 float c[100];
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%d%f%d",&h[i],&c[i],&s[i]);
 
 }
 
 
 for(i=0;i<n;i++){
 if(h[i]>50 && c[i]<0.7 && s[i]>5600)
   printf("Grade 10\n");
 else if(h[i]>50 && c[i]<0.7 && s[i]<5600)
   printf("Grade 9\n");
 else if(h[i]<50 && c[i]<0.7 && s[i]>5600)
   printf("Grade 8\n");
 else if(h[i]>50 && c[i]>0.7 && s[i]>5600)
   printf("Grade 7\n");
 else if(h[i]>50 || c[i]<0.7 || s[i]>5600)
   printf("Grade 6\n");
 else
   printf("Grade 5\n");
 }
 return 0;
}
