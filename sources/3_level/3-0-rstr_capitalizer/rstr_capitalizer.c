/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:40:23 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 11:40:25 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : rstr_capitalizer
** Expected files   : rstr_capitalizer.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that takes one or more strings and, for each argument, puts 
** the last character of each word (if it's a letter) in uppercase and the rest
** in lowercase, then displays the result followed by a \n.
** 
** A word is a section of string delimited by spaces/tabs or the start/end of the
** string. If a word has a single letter, it must be capitalized.
** 
** If there are no parameters, display \n.
** 
** Examples:
** 
** $> ./rstr_capitalizer | cat -e
** $
** $> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
** premieR petiT tesT$
** $> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
** deuxiemE tesT uN peU moinS  facilE$
**    attentioN c'esT paS duR quanD memE$
** alleR uN dernieR 0123456789pouR lA routE    E $
** $>
*/

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	rstr_capitalizer(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z' && *(s + 1) != ' ' &&
			*(s + 1) != '\t' && *(s + 1) != '\n')
			ft_putchar(*s + 32);
		else if (*s >= 'a' && *s <= 'z' && (*(s + 1) == ' ' ||
			*(s + 1) == '\t' || *(s + 1) == '\n' || *(s + 1) == '\0'))
			ft_putchar(*s - 32);
		else
			ft_putchar(*s);
		s++;
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
		rstr_capitalizer(argv[i]);
		i++;
	}
	return (0);
}
