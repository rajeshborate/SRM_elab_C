#include <stdio.h>
 
int main()
{
  int n, c, row, num = 1, space;
 
  scanf("%d", &n);
 
  space = n - 1;
 
  for (row = 1; row <= n; row++)
  {
    num = row;
 
 
 
  space--;
 
  for (c = 1; c <= row; c++)
  {
    printf("%d ", num);
    num++;
  }
 
  num = num - 2;
 
  for (c = 1 ; c < row; c++)
  {
    printf("%d ", num);
    num--;
  }
 
   printf("\n");
  }
 
  return 0;
}
