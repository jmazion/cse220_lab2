#include "common.h"

static void print_page_header(char source_name[], char date[])
{    
	static int page_number = 0; // Only initializes the first time function is called
	printf("\nPage %d\t%s\t%s\n\n", page_number, source_name, date);
	++page_number;
}

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
	char max_line[MAX_PRINT_LINE_LENGTH+1];
	
    
    if (++line_count > MAX_LINES_PER_PAGE) // New Page
    {
        print_page_header(source_name_to_print, date_to_print);
		line_count = 1;
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH) // If line is longer than desired
    {
        save_chp = (line + MAX_PRINT_LINE_LENGTH);
		save_ch = *save_chp;
		*save_chp = '\0';
		strncpy(max_line, line, MAX_PRINT_LINE_LENGTH);
		max_line[MAX_PRINT_LINE_LENGTH-1] = '\0';
    }
    if (save_chp)
    {
        *save_chp = save_ch;
    }
    printf("\n%s",max_line);
    ++line_count; // Another line printed
}

