#include <stdio.h>
#include <math.h>

int main () {
int rank1, rank2, rank2_s, rank3, rank3_s, total, choice;

printf ("insert number of gold, high honors, high honors w/ seal, honors, honors w/ seal, and total students:\n");
scanf ("%d %d %d %d %d %d", &rank1, &rank2, &rank2_s, &rank3, &rank3_s, &total);
printf ("enter your rank:\n");
printf ("(1) gold\n");
printf ("(2) high honors\n");
printf ("(3) high honors w/ seal\n");
printf ("(4) honors\n");
printf ("(5) honors w/ seal\n");
scanf ("%d", &choice);

int mean = (98 * rank1 + 95 * rank2 + 96 * rank2_s + 93 * rank3 + 94 * rank3_s) / total;
int variance = (pow((98 - mean), 2) * rank1 + pow((95 - mean), 2) * rank2 + pow((96 - mean), 2) * rank2_s + pow((93 - mean), 2) * rank3 + pow((94 - mean), 2) * rank3_s) / total;
int sv = (sqrt (variance));

printf ("mean: %d\n", mean);
printf ("variance: %d\n", variance);
printf ("standard deviation: %d\n", sv);

if (choice == 1)
printf ("percentile rank: %d", ((rank2 + rank2_s + rank3 + rank3_s) / total) * 100);

if (choice == 2)
printf ("2");

if (choice == 3)
printf ("3");

if (choice == 4)
printf ("4");

if (choice == 5)
printf ("5");


}
