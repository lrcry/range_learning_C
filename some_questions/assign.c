#include <stdio.h>

int main (int argc, char** argv) 
{
	int a = 3;
	int b = 5;
	int c = 8;

	a = b = c;
	printf ("What is 'a'? %d\n", a);
	// a = 8.
	// a = b = c -> b = c(8), then a = b(8)

	getchar();
	return 0;
}
