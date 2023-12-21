#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void exam3_function(char *input)
{
	char dest_buffer[32];
	int input_len = strlen(input);
	
	printf("size of input %10d\n", input_len);
	if ((input_len < 32) && !(input_len <0))
	{
		strcpy(dest_buffer, input);
		printf("The first command line argument is %s.\n", dest_buffer);
	}
	else
	{
		printf("Error – input is too long for buffer.\n");
	}
}
 
int main(int argc, char *argv[])
	{
	 
	if (argc > 1)
	{
		exam3_function(argv[1]);  
	}
	else
	{
		printf("No command line argument was given.\n");
	}

	return 0;
}
