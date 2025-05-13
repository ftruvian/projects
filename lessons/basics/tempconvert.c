#include <stdio.h>
int main () {
	int celsius;
	for (celsius = 0; celsius <= 200; celsius = celsius + 10)
		printf ("\t%3d\t%6.1f\n", celsius, (9.0/5.0) * (celsius+32));
}
