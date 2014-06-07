#include <stdio.h>
#include <stdlib.h>

/**
 * Generate a pwd with several letters
 * ASCII range: [65, 90](Upper case) [97, 122](Lower case)
 * parameter: pwd_length
 */
char* pwd_gen_letter(int);
char* pwd_gen_letter_upper_case_only(int);
char* pwd_gen_letter_lower_case_only(int);

/**
 * Generate a pwd with several characters of ASCII
 * ASCII range: [33, 126]
 * parameter: pwd_length
 */
char* pwd_gen_character(int); 

/**
 * Generate a pwd with the combination of three kind of characters:
 * 	upper-case letters,
 * 	lower-case letters,
 * 	digits,
 * 	other visible characters in ASCII (33~47)
 * parameter: pwd_length, uc_lt_num, lc_lt_num, digit_num, other_char_num
 */
char* pwd_gen_char_combination(int, int, int, int);