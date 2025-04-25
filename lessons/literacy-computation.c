#include <stdio.h>

float total_men;
float total_l;
float per_l_men;
float pop;

int main () {
    printf ("input percentage of men:");
    scanf ("%f", &total_men);
    printf ("input percentage of literate people:");
    scanf ("%f", &total_l);
    printf ("input percentage of literate men:");
    scanf ("%f", &per_l_men);
    printf ("input population:");
    scanf ("%f", &pop);
    printf ("illiterate men: %f\n", pop * total_men - pop * total_men * per_l_men);
    printf ("illiterate women: %f\n", pop * (1 - total_men) * (total_l - per_l_men));
}
