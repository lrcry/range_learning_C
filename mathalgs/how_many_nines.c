#include <stdio.h>

/**
 * How many '9's in the integers between 1 and 100?
 */
int main(int argc, char* argv[]) {
	int n = 1;
	int count_nine = 0;
	
	while (n <= 100) {
		if (n % 10 == 9 && n / 10 == 9)
			count_nine += 2;
		else if (n % 10 == 9 || n / 10 == 9)
			count_nine++;

		n++;
	}

	printf("9s: %d\n", count_nine); // there are 20 '9's.
	
	
	return 0;
}

/**
 * Think about a question:
 * If the number in this problem does not range from 1 to 100 but from a to b (a > b > 0),
 * 	how to count the '9's in the integers between a and b?
 * 	e.g. from 32 to 9999 how many '9's in it?
 */
