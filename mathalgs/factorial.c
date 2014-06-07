#include <stdio.h>

long factorial(long);

int main(int argc, char* argv[]) {
	long number = 0;
	printf("Give me a number: \n");
	scanf("%ld", &number);
	
	long fctr = factorial(number);

	printf("The factorial of %ld is %ld\n", number, fctr);

	return 0;
}

long factorial(long number) {
	if (number == 0)
		return 1;
	else 
		return number * factorial(number - 1);
}
