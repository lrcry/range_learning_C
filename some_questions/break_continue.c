#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * To judge if an integer is prim
 */
int is_prime(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			break; // break 'for'
		}
	}
	
	if (i == n) {
		return 1;
	} else {
		return 0;
	}
}

int main(int argc, char* argv[]) {
	int i;
	for (i = 1; i < 100; i++) {
		if (!is_prime(i))
			continue; // continue 'for'
		printf("%d is prim.\n", i);
	}
	
	return 0;
}
