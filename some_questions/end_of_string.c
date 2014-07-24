#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	char str[6] = "hello";
	char rvs_str[6] = "";
	
	printf("str = %s\n", str);
	
	for (i = 0; i <5; i++)
		// rvs_str[5 - i] = str[i]; // Wrong answer: rvs_str[5] = '\0', which means the end of a string
		rvs_str[4 - i] = str[i];
	
		// or:
	// for (i = 4; i  >= 0; i--)
	//	rvs_str[4 - i] = str[i]; 
	
	printf("rvs_str = %s\n", rvs_str);
	
	return 0;
}