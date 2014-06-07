#include<stdio.h>
#include<time.h>

void increment(int);

int main333(int argc, char* argv[]) {
	int i = 3;
	int j = 4;
	
	increment(i);
	increment(j);

	printf("i=%d, j=%d", i, j); // i=3, j=4. 
	// argument(实参) and parameter(形参)
	// C语言是传值调用， increment(i) -> int x, x = i, increment(x). i是不变的
	
	return 0;
}

void increment(int x) {
	x = x + 1;
}
