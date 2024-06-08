#include <stdio.h>
int palindrome( int numb);
int main()
{
   int i, j, max = 0;
   int product,numb;
  for (i = 100; i <= 999; i++) {
    for (j = 100; j <= 999; j++) {
        product = i*j;
        
        printf("%d*%d=%d\n",i,j,product);
      if (palindrome(product) && product > max) {
        max = product;
      }
    }
  }
  printf("The largest Palindrome is %d\n", max);
  
}
int palindrome( int numb)
{
   int reversed = 0,remainder, orignal = numb;
  while (orignal) {
   remainder=orignal%10;
   reversed=reversed*10+remainder;
   orignal/=10;
  }
  return reversed == numb;
}
