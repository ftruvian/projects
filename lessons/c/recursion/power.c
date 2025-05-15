#include <stdio.h>
int power (int a, int b);

int main () {
  int a, b, result;
  printf("enter a number and its power\n");
  scanf("%d %d", &a, &b);
  result = power (a, b);
  printf ("the result is: %d\n", result);
}

int power (int a, int b) {
  int result;
  if (b == 1) {
    return (a);
  } 
  else {
    result = a * power (a, b - 1);
    return (result);
  }
}
