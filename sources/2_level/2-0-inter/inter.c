/*
** Assignment name  : inter
** Expected files   : inter.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that takes two strings and displays, without doubles, the
** characters that appear in both strings, in the order they appear in the first
** one.
** 
** The display will be followed by a \n.
** 
** If the number of arguments is not 2, the program displays \n.
** 
** Examples:
** 
** $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
** padinto$
** $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
** df6ewg4$
** $>./inter "rien" "cette phrase ne cache rien" | cat -e
** rien$
** $>./inter | cat -e
** $
*/

#include <unistd.h>

int 	is_instring(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int 	is_first(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int 	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (argc > 2)
	{
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			if (is_instring(str2, str1[i]) && is_first(str1, str1[i], i))
				write(1, &str1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
