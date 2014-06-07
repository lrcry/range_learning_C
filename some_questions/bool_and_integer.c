#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("Is !3 exist? !3=%d\n", !3);
	printf("!3 = !1? %d\n", !3 == !1);
	// the result is 1.
	// in C, bool values are: 0 (false); 1,2,3,4,5,...(true)

	return 0;
}
