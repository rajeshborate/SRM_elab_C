#include <stdio.h>
int main()
{
int i,j,n;
  scanf("%d",&n);
   for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            // Print the current column number
          if(i==j)
            printf("*");
          else
            printf("%d", j);
         
          
        }

        printf("\n");
   }
	return 0;
}
