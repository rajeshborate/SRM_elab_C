#include <stdio.h>
    

int main ()
    {
 
        int number[30];
        int i, j, a, n, counter, average;
 
        
        scanf("%d", &n);
 

        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
 
        }
 
        
 
        
 
        printf("%d\n", number[n-2]);
  
return 0;
}
        
