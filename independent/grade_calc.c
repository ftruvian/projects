#include <stdio.h>

int s1, s2, s3, s4, s5;


int main () {

printf ("sub1 grade (/100)\n");
    scanf ("%d", &s1);
printf ("sub2 grade (/100)\n");
    scanf ("%d", &s2);
printf ("sub3 grade (/100)\n");
    scanf ("%d", &s3);
printf ("sub4 grade (/100)\n");
    scanf ("%d", &s4);
printf ("sub5 grade (/100)\n");
    scanf ("%d", &s5);
    
float total = s1 + s2 + s3 + s4 + s5;    

printf ("total grade: %f\n", total);

float average = total / 500 * 100;

printf ("average: %f\n", average);
}
