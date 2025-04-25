#include <stdio.h>
#include <math.h>

float pi = 3.14;
float r;
int l, w;

float main () {
 printf ("insert radius of circle\n");
 scanf ("%d%f", &r, &r);
 printf ("insert length of polygon\n");
 scanf ("%d", &l);
 printf ("insert width of polygon\n");
 scanf ("%d", &w);
 printf ("circumference of a circle: \t%4.2f\n", pi * pow (r, 2));
 printf ("area of a circle: \t\t%4.2f\n\n", 2 * pi * r);
 printf ("================================\n");
 printf ("perimeter of polygon: \t\t%4d\n", 2 * l + 2 * w);
 printf ("area of polygon: \t\t%4d\n", l * w);
 return 0;
}