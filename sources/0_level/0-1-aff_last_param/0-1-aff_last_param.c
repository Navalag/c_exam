/*
Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int n;
	int m;

	m = argc - 1;
	n = 0;
	if (argc > 1)
	{
		while (argv[m][n] != '\0')
		{
			ft_putchar(argv[m][n]);
			n++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return 0;
}
