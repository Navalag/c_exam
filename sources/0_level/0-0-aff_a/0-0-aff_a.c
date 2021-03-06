/*
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (argc > j)
	{
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);			}
			i++;
		}
		i = 0;
		j++;
	}
	ft_putchar('\n');
	return (0);
}
