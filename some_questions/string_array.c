#include <stdio.h>

int main(int argc, char* argv[])
{
	char arr[] = "Hello world.\n"; // recommended pattern of initializing a string
	char arr_new[] = "Hello arr_new";
	char another_arr[6] = "Hello world.\n"; // warning: initializer-string for array of chars is too long
				// in this another_arr, there is no any NULL(\0) character

	char arr_without_null[6] = {'s', 'i', 's', 't', 'e', 'r'}; // in this another_arr, there is no any NULL(\0) character
	
	// char the_arr[6] = arr; // invalid initializer
	
	printf("%s\n", arr_new); // a char array can be printed like this 
	printf("String: %s", arr); // Hello world.
	printf("First char of string: %c\n", "Hello world.\n"[0]); // H
	printf("Another string: %s\n", another_arr); // wrong result
	printf("Arr without null: %s\n", arr_without_null); // wrong result
	
	return 0;
}
	
	