#include <stdlib.h>

#define random(x) (rand() % x)

/* Visible characters */
#define ASCII_RAND_RANGE 94
#define ASCII_CHAR_START 33
#define ASCII_CHAR_END 126

/* Letters */
#define LETTER_RANGE 26
#define LETTER_UPPER_CASE_START 65
#define LETTER_UPPER_CASE_END 90
#define LETTER_LOWER_CASE_START 97
#define LETTER_LOWER_CASE_END 122

/* Digits */
#define DIGIT_RANGE 10
#define DIGIT_START 48
#define DIGIT_END 57

/* Other characters, ASCII from 33 to 47 */
#define OTHER_RANGE 15
#define OTHER_START 33
#define OTHER_END 47

/* Patterns */
#define PATTERN_LETTERS 2
#define PATTERN_CHARS 3

#define COMB_PTN_UPPER_CASE 0
#define COMB_PTN_LOWER_CASE 1
#define COMB_PTN_DIGITS 2
#define COMB_PTN_OTHER_CHAR 3


