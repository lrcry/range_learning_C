#include <stdio.h>

/**
 * 尼玛打个菱形这么费劲……
 * 感觉这段翔写的跟大一时候一模一样……
 * (It seems that this piece of waste is the same as the one I wrote in 2010 when I just entered that university..)
 */
void print(int num, char ch) {
	int i, j, k;
	
	if (num % 2 == 0) { // if num is even, error.
		printf("Error: %d is not a valid number of points in the diamonds.\n");
		return;
	}
	
	for (i = 1; i <= num ;i += 2) {
		for (k = 0; k < (num - i) / 2; k++)
			printf("\t");
		
		for (j = 1; j < i; j++) {
			printf("%c\t", ch);
		} 
		printf("%c\n", ch);
	}

	if (num == 1) {
		return;
	}

	for (i = 0; i < num  / 2; i++) {
		for (j = 0; j <= i; j++) {
			printf("\t");
		}

		for (k = num - 2 - i * 2; k > 0; k--) {
			printf("%c\t", ch);
		}
		printf("\n");
	}
}

int main(int argc, char* argv[]) {
	int num;
	// char ch;
	printf("Input an odd integer:\n");
	scanf("%d", &num);
	// printf("Input a char:\n");
	// ch = getchar();
	
	print(num, '*');
	
	return 0;
}	
