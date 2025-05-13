#include <stdio.h>
int prime_factorizer (int a, int count);

int prime_factorizer (int num, int count) {
  if (num >= 1) {
    if (num % count == 0) {
      printf ("%d\n", count);
      prime_factorizer (num / count, count);
      return (count);
    }
    else {
      if (num <= count) {
        printf ("end");
        return (0);
      }
      else 
        prime_factorizer (num, count + 1);
        return (count);
    }
  }
  else {
    return (count);
  }
    
}

int main () {
  int number;
  printf ("enter a number%d\n", 7 % 7);
  scanf("%d", &number);
  prime_factorizer (number, 2);
}
