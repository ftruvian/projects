#include <stdio.h>
#include <stdbool.h>

// prototypes
float power (float a, int b);
float add (float a, float b);
float sub (float a, float b);
float mult (float a, float b);
float div (float a, float b);

// main
float main () {

// main local declarations	
float res, base, base2;
int choice, amt, pow;
bool out;

// action specifier
	while (out == false) {
		printf ("%30s", "Enter desired action:");
		printf ("\n (1) Add\t (5) Power");
		printf ("\n (2) Subtract\t (6) Exit");
		printf ("\n (3) Multiply\t");
		printf ("\n (4) Divide\n");
		scanf ("%d", &choice);
	 
		// exit signal
	  if (choice == 6)
      out = true;

    // value selector
    else if (choice < 5 && choice > 0) {
      printf ("\ninput first value and second value to do the operation\n");
      scanf ("%f %f", &base, &base2);

      // functions list
      switch (choice) {
        case 1:
          res = add (base, base2);
          break;
        case 2:
          res = sub (base, base2);
          break;
        case 3:
          res = mult (base, base2);
          break;
        case 4:
          res = div (base, base2);
          break;
    }
      // result aggregate
      printf ("%10.2f\n", res);
    }

		// power selector
    else if (choice == 5) {
      printf ("\ninput first value as base and second value as power\n");
      scanf ("%f %d", &base, &pow);
      res = power (base, pow);
  		// result aggregate
  		printf ("%10.2f\n", res);
    }
		}
	}

// addition function
float add (float a, float b) {
	float res = a + b;
	return (res);
}

// subtraction function
float sub (float a, float b) {
	float res = a - b;
	return (res);
}

// multiplication function
float mult (float a, float b) {
	float res = a * b;
	return (res);
}

// division function
float div (float a, float b) {
	float res = a / b;
	return (res);
}

// power function
float power (float a, int b) {
  float res;
  if (b == 0) {
    printf ("hello");
    return (1);
  }
  else {
    if (b == 1) {
      return (a);
    }
    else if (b > 1) {
    res = a * power (a, --b);
    return (res);
    }
  }
} 


