#include <stdio.h>

int is_prim(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			// printf("not prim\n");
			return 0;
		}
	}
	
	// printf("judge\n");

	if (i == n)
		return 1;
	else
		return 0;
}

int is_prim_brk_cont(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			break;
	}
	
	if (i == n)
		return 1;
	else
 		return 0;
}

int main(int argc, char* argv[]) {
	int i;
	for (i = 0; i < 100; i++) {
		if (is_prim(i))
			printf("%d\t", i);
		if (is_prim_brk_cont(i))
			printf("%d is prim.\n", i);
	}
	
	return 0;
}
