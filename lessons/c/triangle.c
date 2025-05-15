#include <stdio.h>

int main () {
int count;

for (count = 1; count <= 7;) {
// first side
printf ("A\t");

if (count <= 6)
printf ("B\t");
else printf ("\t");

if (count <= 5)
printf ("C\t");
else printf ("\t");

if (count <= 4)
printf ("D\t");
else printf ("\t");

if (count <= 3)
printf ("E\t");
else printf ("\t");

if (count <= 2)
printf ("F\t");
else printf ("\t");

if (count <= 1)
printf ("G\t");
else printf ("\t");

//other side
if (count <= 2)
printf ("F\t");
else printf ("\t");

if (count <= 3)
printf ("E\t");
else printf ("\t");

if (count <= 4)
printf ("D\t");
else printf ("\t");

if (count <= 5)
printf ("C\t");
else printf ("\t");

if (count <= 6)
printf ("B\t");
else printf ("\t");

printf ("A\n");
count += 1;

}

}
