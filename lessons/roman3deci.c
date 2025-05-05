#include <stdio.h>
void num2roman (int a);
int main () {
int number;
  printf("enter number\n");
  scanf ("%d", &number);
  printf ("converted to roman:\n");
  num2roman(number);
  printf ("\n");
}

void num2roman (int a) {
  if (a >= 1000) {
    printf("m");
    num2roman (a - 1000);
  }
 else if (a >= 900) {
    printf ("dm");
    num2roman (a - 900);
  }
  else if (a >= 500) {
    printf("d");
    num2roman (a - 500);
  }
  else if (a >= 400) {
    printf ("cd");
    num2roman (a - 400);
  }
  else if (a >= 100) {
    printf("c");
    num2roman (a - 100);
  }
  else if (a >= 90) {
    printf ("xc");
    num2roman (a - 90);
  }
  else if (a >= 50) {
    printf("l");
    num2roman (a - 50);
  }
  else if (a >= 40) {
    printf ("xl");
    num2roman (a - 40);
  }
  else if (a >= 10) {
    printf("x");
    num2roman (a - 10);
  }
  else if (a >= 9) {
    printf ("ix");
    num2roman (a - 9);
  }
  else if (a >= 5) {
    printf("v");
    num2roman (a - 5);
  }
  else if (a >= 4) {
    printf ("iv");
    num2roman (a - 4);
  }
  else if (a >= 1) {
    printf("i");
    num2roman (a - 1);
  }
  else if (a = 0) {
    printf("\n");
  }
}

