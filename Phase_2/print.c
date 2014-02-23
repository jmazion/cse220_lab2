#include "common.h"

static void print_page_header(char source_name[], char date[])// Declared first, since it is static
{    
	static int page_number = 0; // Only initializes the first time function is called
	printf("\nPage %d\t%s\t%s\n\n", page_number, source_name, date);// Prints header
	++page_number;//Increase the page number
}

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
	char max_line[MAX_PRINT_LINE_LENGTH+1];
	
    
    if (++line_count > MAX_LINES_PER_PAGE)    // New Page
    {
        print_page_header(source_name_to_print, date_to_print);
		line_count = 1;// Reset line count
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)   // If line is longer than desired
    {
        save_chp = (line + MAX_PRINT_LINE_LENGTH);//adds 65 to adress pointer
		strncpy(max_line, line, MAX_PRINT_LINE_LENGTH);
		max_line[MAX_PRINT_LINE_LENGTH-1] = '\0';  
		printf("\n%s",max_line);
		puts(save_chp)
    }
    else
    {                            
        *save_chp = save_ch;
		puts(line);             
    }
    
    ++line_count; // Another line printed
}

