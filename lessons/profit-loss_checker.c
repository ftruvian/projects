#include <stdio.h>

int main () {
float cost, sell, result;

printf ("input cost price and sell price of product:");
scanf ("%f %f", &cost, &sell);
result = sell - cost;
if (result < 0)
printf ("you have incurred a loss of: $%4.2f", result);
else
printf ("you have a profit of: $%4.2f", result);
}