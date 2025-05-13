#include <stdio.h>
float areaperi (int r, float *a, float *p);

float main () {
  int radius;
  float area, perimeter;

  printf ("\nEnter radius of circle");
  scanf ("%d", & radius);
  areaperi (radius, &area, &perimeter);

  printf ("a = %f", area);
  printf ("\nPerimeter = %f", perimeter);
}

float areaperi (int r, float *a, float *p) {
  *a = 3.14 * r * r;
  *p = 2 * 3.14 * r;
}
