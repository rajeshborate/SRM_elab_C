#include<stdio.h>
struct student
{
          int no;
          char name[20];
          
};
int main()
    {
          struct student s[20],temp;
          int i,j,n;
     
        
          scanf("%d",&n);
          
          for(i=0;i<n;i++)
          scanf("%s%d",s[i].name,&s[i].no);
          for(i=0;i<=n-1;i++)
          {
            for(j=0;j<=n-1;j++)
            {
                if(s[j].no<s[j+1].no)
                {
                  temp=s[j];
                  s[j]=s[j+1];
                  s[j+1]=temp;
                }
            }
          }
         
          for(j=0;j<1;j++)
          printf("%s",s[j].name);
          return 0;
}
