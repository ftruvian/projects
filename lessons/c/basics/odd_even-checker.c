#include <stdio.h>

/*
+-------------------------------------------------------+
| Hindi pa to ayos since nagkakaroon ng overflow sa int |
+-------------------------------------------------------+
*/
int main () {
int num, d;
while (d = 2) {
printf ("insert number:");
scanf ("%d", &num);

printf ("\n%d is ", num);
if (num % 2 == 0)
printf ("even\n");
else
printf ("odd\n");
}
}
