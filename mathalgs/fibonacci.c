#include <stdio.h>

int fibonacci(int);

int main(int argc, char* argv[]) {
	int n = 0;
	printf("Pls input a number n:\n");
	scanf("%d", &n);

	int fib = fibonacci(n);
	printf("Fib of n is %d\n", fib);
	return 0;
}

/**
 * Fibonacci seq
 * Rules:
 * fib(0) = 1;
 * fib(1) = 1;
 * fib(n) = fib(n-1) + fib(n-2) (n>=2)
 */
int fibonacci(int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else 
		return fibonacci(n - 1) + fibonacci(n - 2);
}
