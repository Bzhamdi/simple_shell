#include "shell.h"

/**
 * print_prompt - verif if is terminal.
 *@test: int
 */

void print_prompt(int test)
{
	if (!isatty(STDIN_FILENO))
		test = 1;
	if (test == 0)
		_puts("#BZ$ ");
}

/**
 * sig_handler - checks Ctrl + C is pressed.
 * @sig: int.
 */
void sig_handler(int sig)
{
	if (sig == SIGINT)
		_puts("\n#BZ$ ");
}
