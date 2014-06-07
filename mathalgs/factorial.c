#include <stdio.h>

int factorial(int);

int factorial_circulation(int);

int main(int argc, char* argv[]) {
	int number = 0;
	printf("Give me a number: \n");
	scanf("%d", &number);
	
	int fctr = factorial(number);

	printf("The factorial of %d is %d\n", number, fctr);

	fctr = factorial_circulation(number);
	printf("The factorial by circulation of %d is %d\n", number, fctr);

	return 0;
}

int factorial(int number) {
	if (number == 0)
		return 1;
	else 
		return number * factorial(number - 1);
}

int factorial_circulation(int n) {
	int result = 1;
	
	while (n > 0) {
		result *= n;
		n--;
	}

	return result;
}
