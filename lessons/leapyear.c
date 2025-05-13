#include <stdio.h>
int leapyear (int a, int b);

int main () {
  int year;
  printf ("enter a year\n");
  scanf("%d", &year);
  leapyear (year, 0);
}

int leapyear (int year, int depth) {
  int result;
  if (depth = 0) {
    result = year % 400;
    if (result == 0)
      printf("leapyear\n");
    else {
      leapyear(year, depth + 1);
      return 0;
    }
  }
  
  else if (depth = 1) {
    result = year % 4;
    if (result == 0) {
      printf ("leapyear\n");
      return 0;
    }
    else {
      printf ("Not a leapyear\n");
      return 0;
    }
      
  }
}
