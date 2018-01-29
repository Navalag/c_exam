/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:44:25 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 11:44:30 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : expand_str
** Expected files   : expand_str.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that takes a string and displays it with exactly three spaces
** between each word, with no spaces or tabs either at the beginning or the end,
** followed by a newline.
** 
** A word is a section of string delimited either by spaces/tabs, or by the
** start/end of the string.
** 
** If the number of parameters is not 1, or if there are no words, simply display
** a newline.
** 
** Examples:
** 
** $> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
** vous   voyez   c'est   facile   d'afficher   la   meme   chose$
** $> ./expand_str " seulement          la c'est      plus dur " | cat -e
** seulement   la   c'est   plus   dur$
** $> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
** $
** $> ./expand_str "" | cat -e
** $
** $>
*/

#include <unistd.h>

void	expand_str(char *s)
{
	int		i;

	i = -1;
	while (*s)
	{
		while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
			s++;
		if (*s && i != -1)
			write(1, "   ", 3);
		i = 0;
		while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			i++;
		write(1, s, i);
		s = s + i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
