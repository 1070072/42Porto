
#include "libft.h"

int main() 
{
	char str[8] = "Ola 42";
	const char c[2] = " ";
	char *out;

	/* get the first out */
	out = strtok(str, c);

	/* walk through other tokens */
	while (out != NULL)
	{
    	printf( "%s\n", out );
		out = strtok(NULL , c);
	}
	return(0);
}
