#include <stdio.h>

int function_while(int max) {
	int n = 0;
	while (n < max) {
		++n;
	}

	return n;
}

int function_do_while(int max) {
	int n = 0;
	do {
		++n;
	} while (n < max);

	return n;
}

int main(int argc, char* argv[]) {
	int max = 0;
	int n_while = function_while(max);
	int n_do_while = function_do_while(max);
	
	printf("while: n=%d, do while: n=%d\n", n_while, n_do_while);
	
	return 0;
}
