/*
** Assignment name  : search_and_replace
** Expected files   : search_and_replace.c
** Allowed functions: write, exit
** --------------------------------------------------------------------------------
** 
** Write a program called search_and_replace that takes 3 arguments, the first 
** arguments is a string in which to replace a letter (2nd argument) by
** another one (3rd argument).
** 
** If the number of arguments is not 3, just display a newline.
** 
** If the second argument is not contained in the first one (the string)
** then the program simply rewrites the string followed by a newline.
** 
** Examples:
** $>./search_and_replace "Papache est un sabre" "a" "o"
** Popoche est un sobre
** $>./search_and_replace "zaz" "art" "zul" | cat -e
** $
** $>./search_and_replace "zaz" "r" "u" | cat -e
** zaz$
** $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
** $
** $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
** ZaZ eT David aiME le METal.$
** $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
** eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_search_and_replace(char *str1, char *str2, char *str3)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[0])
			str1[i] = str3[0];
		i++;
	}
	return (str1);
}

int		main(int argc, char **argv)
{
	char *temp;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			temp = ft_search_and_replace(argv[1], argv[2], argv[3]);
			ft_putstr(temp);
		}
	}
	ft_putchar('\n');
	return (0);
}
