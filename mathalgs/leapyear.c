#include <stdio.h>

int is_leap_year(int);

int main(int argc, char* argv[]) {
	printf("Please input a year:\n");
	printf("Press 4 to exit\n");

	int year = 0;
	scanf("%d", &year);
	
	while (year != 4) {
		printf("The year you input: %d\n", year);	
		int is_leap = is_leap_year(year);
		
		if (is_leap)
			printf("%d is a leap year\n", year);
		else 
			printf("%d is not a leap year\n", year); 

		printf("Please input a year, press 4 to exit\n");
		scanf("%d", &year);
	}

	return 0;
}

/**
 * To judge whether a year is leap.
 * If the number of the year :
 * 	- can be divided by 400; or
 * 	- can be divided by 4 but not 100
 * then the year is a leap year, else not.
 */
int is_leap_year(int year) {
	if (year % 400 == 0)
		return 1;
	else if (year % 4 == 0 && year % 100 != 0) 
		return 1;
	else
		return 0;
}
