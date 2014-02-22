/*
 ============================================================================
 Name        : tests.c
 Author      : Josh Mazion
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "common.h"



/* I am using this as my function testing file. I will update this as i test the functions.
 *
 * Thank you for your coopoperation.
 *
 * */


int main(void) {


	static void print_page_header(char source_name[], char date[]){

		static int page_number = 0;         // Only initializes the first time function is called
		printf("\nPage %d\t%s\t%s\n\n", page_number, source_name, date);        //print the page number, source name and date when and add 2 new lines below the header
		++page_number;


	}




	return 0;
}
