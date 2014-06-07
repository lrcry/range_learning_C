#include <stdio.h>

int gcd(int, int);

int main(int argc, char* argv[]) {
	int a = 0, b = 0;

	printf("input 2 integers: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	int g = gcd(a, b); // let's have a try if a name of a variable is the same as that of a function, what will happen next

	printf("GCD is: %d\n", g);
	
	return 0;
}

/**
 * Greatest common divisor using Euclid algorithm
 * a, b are integers, if a can be divided by b, then gcd = b, else gcd = the gcd of b and a%b.
 */
int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	else 
		return gcd(b, a%b);
}
