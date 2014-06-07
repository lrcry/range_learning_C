#include <stdio.h>

int reverse_by_modulo(int);
int reverse_by_char(int);
int reverse_by_mov(int);

int main(int argc, char* argv[]) {
	int integer = 0;
	printf("input an integer: \n");
	scanf("%d", &integer);
	
	int result = reverse_by_modulo(integer);

	printf("what is the result? %d\n", result);

	return 0;
}

/**
 * Reverse by executing modulo calculation on the integer
 */
int reverse_by_modulo(int input) {
	int result = 0;
	while (input > 0) {
		result = result * 10 + integer % 10;
		integer /= 10;
	}	
	
	return result;
}

/**
 * Reverse by converting integer to a char*
 */
int reverse_by_char(int input) {
	return 0;
}



