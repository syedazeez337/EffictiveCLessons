

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if(puts("hello, world") == EOF)
	{
		return EXIT_FAILURE;
		//CODE HERE NEVER EXECUTES
	}
	return EXIT_SUCCESS;
	//code here never executes
}