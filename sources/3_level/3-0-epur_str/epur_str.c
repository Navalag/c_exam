/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <agalavan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:21:47 by agalavan          #+#    #+#             */
/*   Updated: 2017/12/04 15:59:46 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : epur_str
** Expected files   : epur_str.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that takes a string, and displays this string with exactly one
** space between words, with no spaces or tabs either at the beginning or the end,
** followed by a \n.
** 
** A "word" is defined as a part of a string delimited either by spaces/tabs, or
** by the start/end of the string.
** 
** If the number of arguments is not 1, or if there are no words to display, the
** program displays \n.
** 
** Example:
** 
** $> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
** vous voyez c'est facile d'afficher la meme chose$
** $> ./epur_str " seulement          la c'est      plus dur " | cat -e
** seulement la c'est plus dur$
** $> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
** $
** $> ./epur_str "" | cat -e
** $
** $>
*/

#include <unistd.h>

int			main(int argc, char **argv)
{
	int		i;
	char	*arg;

	if(argc == 2)
	{
		i = -1;
		arg = argv[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg != '\0')
				write(1, " ", 1);
			i = 0;
			while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != '\t')
				i++;
			write(1, arg, i);
			arg += i;
		}
	}
	write(1, "\n", 1);
	return (0);
}
