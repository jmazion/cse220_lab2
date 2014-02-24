#include "common.h"

int main (int argc, const char *argv[])
{
	//Variables    
	FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    time_t timer;
	BOOLEAN is_next_line = TRUE;

	source_file = init_lister(argv[1]);// point to file in question
	if (source_file != 0)
	{
	   	strcpy(source_name, argv[1]); // Get file name
	
		do
		{
			is_next_line = get_source_line(source_file, source_name, date);
		}while(is_next_line == TRUE);

		fclose(source_file);// Close the file
	}
	else
	{
		puts("\nInvalid filename.");
	}
    return 0;
}
FILE *init_lister(const char *name)
{
    FILE *file;
    file = fopen(name, "r");
    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (1) //This is missing a condition
    {
		++line_number;
		print_line(print_buffer, src_name, todays_date);
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

