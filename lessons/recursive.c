#include <stdio.h>
int factorial (int a);

int main () {
  int a, result;
  printf ("enter number\n");
  scanf("%d", &a);
  result = factorial (a);
  printf ("\nAnswer: %d\n", result);
}

int factorial (int a) {
  int result;
  if (a == 1)
    return (1);

  else 
    result = a * factorial (a - 1);
    
  return (result);
}
