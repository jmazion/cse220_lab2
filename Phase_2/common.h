#ifndef CSE220_project2_common_h
#define CSE220_project2_common_h

// System header files to include
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>

// Global Constants
#define FORM_FEED_CHAR          '\f'
#define MAX_FILE_NAME_LENGTH    32
#define MAX_SOURCE_LINE_LENGTH  256
#define MAX_PRINT_LINE_LENGTH   80
#define MAX_LINES_PER_PAGE      50
#define DATE_STRING_LENGTH      26

// Define boolean datatype
typedef enum {
    FALSE, TRUE,
}BOOLEAN;

// List of nonstatic functions
FILE *init_lister(const char *name);
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[]);
void print_line(char line[], char source_name_to_print[], char date_to_print[]);

#endif
