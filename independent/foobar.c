#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// prototypes
float square ();
float cube ();
float add ();
float sub ();
float mult ();
float div ();

// main
float main () {

// main local declarations	
float res, pow1, pow2;
int choice, amt;
bool out;

// action specifier
	while (out == false) {
		printf ("%30s", "Enter desired action:");
		printf ("\n (1) Add\t (5) Square");
		printf ("\n (2) Subtract\t (6) Cube");
		printf ("\n (3) Multiply\t (7) Exit");
		printf ("\n (4) Divide\n");
		scanf ("%d", &choice);

		// amount specifier
		if (choice < 5 && choice > 0) {
		printf ("\ninput amount of values you are going to encode:\n");
		scanf ("%d", &amt);
		switch (amt) {
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
		}
		}
		
		// power selector
		else if (choice < 7 && choice > 4)
		printf ("\ninput first value as base and second value as power\n");
		scanf ("%f %f", &pow1, &pow2);

		// exit signal	
		if (choice == 7)
			out = true;

		// functions list
		else {
		switch (choice) {
			case '1':
				add ();
			case '2':
				sub ();
			case '3':
				mult ();
			case '4':
				div ();
			case '5':
				square ();
			case '6':
				cube ();
		}

		// result aggregate
		printf ("%10.2f", res);
		}
	

	}
}

// addition function
float add () {
	float res = 1;
	printf ("%f", res);
	return (res);
}

// subtraction function
float sub () {
	float res = 2;
	printf ("%f", res);
	return (res);
}

// multiplication function
float mult () {
	float res = 3;
	printf ("%f", res);
	return (res);
}

// division function
float div () {
	float res = 4;
	printf ("%f", res);
	return (res);
}

/*
To be reworked ung dalawa since may power function sa <math.h>
*/
// square function
float square () {
	float res = 5;
	printf ("%f", res);
	return (res);
}

// cube function
float cube () {
	float res = 6;
	printf ("%f", res);
	return (res);
}


