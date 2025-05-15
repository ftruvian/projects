#include <stdio.h>


float bsal;
float hrent = 0.2;
float dallow = 0.4;
float gsal;

float main () {
printf ("insert your salary\n$");
scanf ("%f", &bsal);
printf ("your gross salary is: $%f\n", bsal - bsal * hrent - bsal * dallow);
}