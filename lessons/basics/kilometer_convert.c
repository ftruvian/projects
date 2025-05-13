#include <stdio.h>


float km, m, cm, in, ft;

int main () {
printf ("insert km to be converted\n");
scanf ("%f", &km);
printf ("meters: %f\n", km * 1000);
printf ("centimeters: %f\n", km * 100000);
printf ("inches: %f\n", km * 39370.1);
printf ("feet: %f\n", km * 3280.84);
}