#include <stdio.h>

/**
 * ++i
 */
int operated_by_prefix(int);

/**
 * i++
 */
int operated_by_postfix(int);

int main(int argc, char* argv[]) {
	int prefix_num = 3;
	int postfix_num = 3;
	
	printf("++i: %d\n", operated_by_prefix(prefix_num)); 
	// 4. ++i: return i+1 with a side effect (i = i + 1). Increment first, then returning.

	printf("i++: %d\n", operated_by_postfix(postfix_num)); 
	// 3. i++: return i with a side effect (i + 1). Returning first, then increment.

	return 0;
}

int operated_by_prefix(int n) {
	return ++n;
}

int operated_by_postfix(int n) {
	return n++;
}
