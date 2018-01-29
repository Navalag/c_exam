/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char ch;

	ch = 'a';
	while (ch <= 122)
	{
		if (ch % 2 != 0)
			ft_putchar(ch);
		else
			ft_putchar(ch - 32);
		ch++;
	}
	ft_putchar('\n');
	return (0);
}
