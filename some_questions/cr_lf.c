#include <stdio.h>

int main (int argc, char** argv)
{	
	//int a = 59;
	//char c = 60;
	//char result = c + a;
	
	//printf ("Can it be calculated between int and char? %c\n", result);
	
	// getchar();

	char fuck = (char) 13; // CR
	char l = (char) 10; // LF

	printf ("Is this a line feed? %c", l);

	printf ("Is this a carridge return? %c", fuck);

	printf ("fuck\n");

	// result:
	// 	Is this a line feed?
	// 	fuckhis a carridge return? ("Is" is overwritten)
	// In Linux, CR means the cursor moves back to the first position of current line,
	// LF means the cursor moves to the first position of the next line.

	getchar();
	
	return 0;
}
