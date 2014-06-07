#include <stdio.h>
#include <math.h>

int myround(double);

int main(int argc, char* argv[]) {
	double number = 0.0;
	printf("Input a number: \n");
	scanf("%lf", &number);

	int round = 0;
	round = myround(number);

	printf("%.4lf -> %d\n", number, round);

	return 0;
}

int myround(double number) {
	int number_integer = (int) number; // get the integer part of the number
	double number_decimal = number - number_integer; // get the decimal part of the number
	int round = 0;
	
	if (number_decimal >= 0.5)  // carry (floor)
		round = ceil(number);
	else if (number_decimal > 0 && number_decimal < 0.5) // round (ceil)
		round = floor(number);
	else // wrong situations
		;

	return round;
}
