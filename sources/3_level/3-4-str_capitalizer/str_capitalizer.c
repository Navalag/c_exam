/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:53:13 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 11:53:15 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : str_capitalizer
** Expected files   : str_capitalizer.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that takes one or several strings and, for each argument,
** capitalizes the first character of each word (If it's a letter, obviously),
** puts the rest in lowercase, and displays the result on the standard output,
** followed by a \n.
** 
** A "word" is defined as a part of a string delimited either by spaces/tabs, or
** by the start/end of the string. If a word only has one letter, it must be
** capitalized.
** 
** If there are no arguments, the progam must display \n.
** 
** Example:
** 
** $> ./str_capitalizer | cat -e
** $
** $> ./str_capitalizer "Premier PETIT TesT" | cat -e
** Premier Petit Test$
** $> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
** Deuxieme Test Un Peu Moins  Facile$
**    Attention C'est Pas Dur Quand Meme$
** Aller Un Dernier 0123456789pour La Route    E $
** $>
*/

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	str_capitalizer(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z' && i == 0)
			ft_putchar(s[i]);
		else if (s[i] >= 'a' && s[i] <= 'z' && (s[i - 1] == ' ' ||
			s[i - 1] == '\t' || s[i - 1] == '\n'))
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ' &&
			s[i - 1] != '\t' && s[i - 1] != '\n' && i != 0)
			ft_putchar(s[i] + 32);
		else
			ft_putchar(s[i]);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}
