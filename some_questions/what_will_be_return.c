#include <stdio.h>

int absolute_value(int x)
{
	if (x < 0) {
		return -x;
	} else if (x > 0) {
		return x;
	}

	// else {return 0;}
	// x = 0 is not considered
}

int main(int argc, char* argv[]) {
	printf("3: %d\n", absolute_value(3));
	printf("-3: %d\n", absolute_value(-3));
	printf("0: %d\n", absolute_value(0)); // return an uncertain value

	return 0;
}
