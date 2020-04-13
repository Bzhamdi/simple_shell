#include "shell.h"
/**
* _EndOfLine - handles the End of File.
* @line: result of getline
* @buffer: buffer.
*
*/

void _EndOfLine(int line, char *buffer)
{
	(void)buffer;
	if (line == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_puts("\n");
			free(buffer);
		}
		exit(0);
	}
}
