#include<stdio.h>
int main()
{
    int k,d,n,t,i,j,sum;
    scanf("%d",&t);
    k=0;
    while(k<t)
    {
        sum=0;
        n=0;
        scanf("%d%d",&d,&n);
        for(i=1;i<=d;i++)
        {
            sum=0;
              for(j=1;j<=n;j++)
              {
                 sum = sum+j;
              }
               n=sum;
              }
              printf("%d\n",sum);
              k++;
    }
    return 0;
}
