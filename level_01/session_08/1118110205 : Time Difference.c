#include <stdio.h>
struct time{
int hour,min,sec;

};
int main()
{
  struct time t;
  
int hour,min,sec,c;
  scanf("%d%d%d",&t.hour,&t.min,&t.sec);
  if(t.hour>=24 || t.min>=60 || t.sec>=60){
  printf("Invalid Time");
    return 0;
  }
 
  //printf("24 Hour Format\n");
 else {
 printf("24 Hours Format");
   if(t.hour>10 && t.min>9&&t.sec>9)
     printf("\n%d:%d:%d",t.hour,t.min,t.sec);
   else if(t.hour<10 && t.min>9 && t.sec>9)
   printf("\n0%d:%d:%d",t.hour,t.min,t.sec);
  else if(t.hour>9 && t.min<10 && t.sec>9)
      printf("\n%d:0%d:%d",t.hour,t.min,t.sec);
  else if(t.hour>9&&t.min>9&& t.sec<10)
      printf("\n%d:%d:0%d",t.hour,t.min,t.sec);
  else if(t.hour<10&&t.min<10&&t.sec>9)
      printf("\n0%d:0%d:%d",t.hour,t.min,t.sec);
  else if(t.hour<10&&t.min>9&&t.sec<10)
    printf("\n0%d:%d:0%d",t.hour,t.min,t.sec);
   else if(t.hour>9&&t.min<10&&t.sec<10)
     printf("\n%d:0%d:0%d",t.hour,t.min,t.sec);
   else
    printf("\n%d:%d:%d",t.hour,t.min,t.sec);
 }
   
   if(t.hour<10 || t.min<10 || t.sec<10){
     printf("\n12 Hours Format");
     if(t.hour<10 &&t.min<10 &&t.sec<10)
       printf("\n0%d:0%d:0%d am",t.hour,t.min,t.sec);
     else if(t.hour<10 && t.min<10 &&t.sec>9)
       printf("\n0%d:0%d:%d am",t.hour,t.min,t.sec);
     else if(t.hour<10&&t.min>9&&t.sec<10)
       printf("\n0%d:%d:0%d am",t.hour,t.min,t.sec);
     else if(t.hour>9&&t.min<10&&t.sec<10)
       printf("\n%d:0%d:0%d am",t.hour,t.min,t.sec);
     else if(t.hour>9&&t.min<10&&t.sec>9)
       printf("\n%d:0%d:%d am",t.hour,t.min,t.sec);
     else if(t.hour>9 &&t.min>9&&t.sec<10)
       printf("\n0%d:%d:0%d am",t.hour-12,t.min,t.sec);
     else
       printf("\n0%d:%d:%d am",t.hour,t.min,t.sec);
   }
   else{
   printf("\n12 Hours Format");
     if(t.hour==12 && t.min<60 && t.sec<60)
       printf("\n%d:%d:%d pm",t.hour,t.min,t.sec);
     else if(t.hour>12){
     c=t.hour-12;
       if(c<10 && t.min>9 && t.sec>9)
         printf("\n0%d:%d:%d pm",t.hour-12,t.min,t.sec);
       else if(c<10&& t.min<10 && t.sec>9)
         printf("\n0%d:0%d:%d",c,t.min,t.sec);
       else if(c>10&&t.min>9&&t.sec<10)
         printf("\n0%d:%d:0%d",c,t.min,t.sec);
       else
         printf("\n%d:%d:%d pm",t.hour-12,t.min,t.sec);
     }
    else
      printf("\n%d:%d:%d am",t.hour,t.min,t.sec);
     
     
   }
     
     
      return 0;
  
 }
