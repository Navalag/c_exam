/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:24:18 by agalavan          #+#    #+#             */
/*   Updated: 2017/12/05 17:24:37 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : paramsum
** Expected files   : paramsum.c
** Allowed functions: write
** --------------------------------------------------------------------------------
** 
** Write a program that displays the number of arguments passed to it, followed by
** a newline.
** 
** If there are no arguments, just display a 0 followed by a newline.
** 
** Example:
** 
** $>./paramsum 1 2 3 5 7 24
** 6
** $>./paramsum 6 12 24 | cat -e
** 3$
** $>./paramsum | cat -e
** 0$
** $>
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int		param;
	(void)argv;

	param = argc - 1;
	ft_putnbr(param);
	write(1, "\n", 1);
	return (0);
}
