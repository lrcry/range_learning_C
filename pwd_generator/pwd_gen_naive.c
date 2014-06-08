/*
 * Naive password generator
 * Main functions: generate a fixed-length (which is given by the user) password which consists of characters in ASCII.
 * 	1. containing upper case letters [ok]
 * 	2. containing lower case letters [ok]
 * 	3. containing all ASCII visible characters [ok]
 * 	4. specific combinations of characters [ok]
 * 
 * Other functions: 
 * 	1. save the generated pwd to a specific file with a random name
 * 	2. copy to clipboard
 * 	3. designation of a struct-password <advanced>
 * 	4. implements an algorithm to check the strength of input passwd <advanced>
 * 
 * Think about a problem:
 * 	how to handle the inputs of users? (Never believe in users' input)
 *
 * Author: RangE
 * Start: June 6th, 2014
 * 
 * I use this to learn how to use C language as well as git clone command under Linux. ^_^
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pwd_gen.h"
#include "pwd_gen_func.h"

char* pwd_gen_single_type(int, int, int);

void print_menu() { 
  printf("Pls select an option below: \n");
  printf("input 1 to generate a password with all upper-case letters\n");
  printf("input 2 to generate a password with all lower-case letters\n");
  printf("input 3 to generate a password with all letters\n");
  printf("input 4 to generate a password with all visible ASCII characters\n");
  printf("input 5 to generate a password with specific number of letters, digits and other visible characters\n");
  printf("input 6 to exit\n");
}

int main(int argc, char* argv[]) {
	// 33 ~ 126  rand() % 94 + 33
	int i = 0;
	int uc, lc, dg;
	char option;
	int len = 0;
	char* pwd;
	srand((int) time(0));
	
menu:	print_menu();
	scanf("%c", &option);
	
	if (option == '6')
	  exit(0);
	
L:	printf("Pls input the length of the password you want to generate:\n");
	scanf("%d", &len);
	if (len < 6) {
	  printf("Too short for a password.\n");
	  goto L;
	}
	
	switch (option) {
	  case '6':
	    exit(0);
	  case '1':
	    pwd = pwd_gen_letter_upper_case_only(len);
	    break;
	  case '2':
	    pwd = pwd_gen_letter_lower_case_only(len);
	    break;
	  case '3':
	    pwd = pwd_gen_letter(len);
	    break;
	  case '4':
	    pwd = pwd_gen_character(len);
	    break;
	  case '5':
	    uc = len / 4;
	    lc = len / 3;
	    dg = len / 4;
	    pwd = pwd_gen_char_combination(len, uc, lc, dg);
	    break;
	  default:
	    printf("Invalid options.\n");
	    goto menu;
	    break;
	}
	
	printf("===================== Pwd result ====================\n");
	for (; i < len; i++) {
	  printf("%c", pwd[i]);
	}
	printf("\n");
	printf("===================== Please keep your password carefully =====================\n");
	
	printf("Please choose what you want to do next:\n");
	printf("1 to save the password into a file with random name under the home directory\n");
	printf("2 to copy the password to system clipboard\n");
	printf("if you have remember this password (are you sure?), then press 3 to exit now\n");
	scanf("%c", &option);
	// handle the option
	
	free(pwd);

	return 0;
}


/* Simple-pattern pwds */
char* pwd_gen_single_type(int pwd_length, int range, int offset) {
	int i;
	char* pwd = (char*) malloc(sizeof(char) * pwd_length);
	
	for (i = 0; i < pwd_length; i++) {
		// printf("segment fault\n");
		pwd[i] = (char) random(range) + offset;
	}
	
	return pwd;
}

char* pwd_gen_letter_upper_case_only(int pwd_length) {
	printf("Generating pwd which consists of upper-case letters, length=%d\n", pwd_length);
	char* pwd = pwd_gen_single_type(pwd_length, LETTER_RANGE, LETTER_UPPER_CASE_START);
	return pwd;
}

char* pwd_gen_letter_lower_case_only(int pwd_length) {
  printf("Generating pwd which consists of lower-case letters, length=%d\n", pwd_length);
  char* pwd = pwd_gen_single_type(pwd_length, LETTER_RANGE, LETTER_LOWER_CASE_START);
  return pwd;
}

char* pwd_gen_character(int pwd_length) {
  printf("Generating pwd from set of all visible characters in ASCII table, length=%d\n", pwd_length);
  char* pwd = pwd_gen_single_type(pwd_length, ASCII_RAND_RANGE, ASCII_CHAR_START);
  return pwd;
}

/* Complex-pattern pwds */
char* pwd_gen_letter(int pwd_length) {
  printf("Generating pwd from set of all latin letters, length=%d\n", pwd_length);
  char* pwd = (char*) malloc(sizeof(char) * pwd_length);
  int i = 0;
  
  for (; i < pwd_length; i++) {
    int letter_rand_opt = random(PATTERN_LETTERS);
    if (letter_rand_opt) { // upper case
      pwd[i] = random(LETTER_RANGE) + LETTER_UPPER_CASE_START;
    } else { // lower case
      pwd[i] = random(LETTER_RANGE) + LETTER_LOWER_CASE_START;
    }
  }

  return pwd;
}

char* pwd_gen_char_combination(int pwd_length, int uc_lt_num, int lc_lt_num, int digit_num) {
  printf("Generating pwd from characters, with %d upper-case letters, %d lower-case letters, %d digits, length=%d\n", uc_lt_num, lc_lt_num, digit_num, pwd_length);
  
  char* pwd = (char*) malloc(sizeof(char) * pwd_length);
  int i = 0;
  int count_uc = 0;
  int count_lc = 0;
  int count_dg = 0;
  
  for (; i < pwd_length; i++) {
    int char_rand_opt = random(PATTERN_CHARS);
    switch (char_rand_opt) {
      case COMB_PTN_UPPER_CASE:
	pwd[i] = random(LETTER_RANGE) + LETTER_UPPER_CASE_START;
	count_uc++;
	if (count_uc == uc_lt_num)
	  i--;
	break;
      case COMB_PTN_LOWER_CASE:
	pwd[i] = random(LETTER_RANGE) + LETTER_LOWER_CASE_START;
	count_lc++;
	if (count_lc == lc_lt_num)
	  i--;
	break;
      case COMB_PTN_DIGITS:
	pwd[i] = random(DIGIT_RANGE) + DIGIT_START;
	count_dg++;
	if (count_dg == digit_num)
	  i--;
	break;
      case COMB_PTN_OTHER_CHAR:
	pwd[i] = random(OTHER_RANGE) + OTHER_START;
	break;
      default:
	break;
    }
  }
  
  
  return pwd;
}
