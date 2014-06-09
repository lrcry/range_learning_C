#include <stdio.h>

int main(int argc, char* argv[]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; i++) {
			printf("inner %d\n", j);
			break;
		}

		printf("outer %d\n", i);
	}
	
	// inner 0, (break,) outer 0, inner 0, (break,) outer 1, inner 0, (break,) outer 2,...
	// break和continue都只能跳出或继续内层循环。	

	return 0;
}
