#include "common.h"

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
	
    
    if (++line_count > MAX_LINES_PER_PAGE)    // New Page
    {
        print_page_header(source_name_to_print, date_to_print);
		line_count = 1;
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)   // If line is longer than desired
    {
        save_chp = (line + MAX_PRINT_LINE_LENGTH);
		save_ch = *save_chp;     //adds 65 to adress pointer 
		*save_chp = '\0';   //sets last char of a line to the null terminator
    }
    if (save_chp)   //is only false when save_chp points to null
    {       

       /*
       we still need a print statement here daniel ( I think)
       */                      
        *save_chp = save_ch;               
    }
    puts(save_chp);
    ++line_count;      // Another line printed
}
static void print_page_header(char source_name[], char date[])
{    
	static int page_number = 0;         // Only initializes the first time function is called
	printf("\nPage %d\t%s\t%s\n\n", page_number, source_name, date);        //print the page number, source name and date when and add 2 new lines below the header
	++page_number;
}
