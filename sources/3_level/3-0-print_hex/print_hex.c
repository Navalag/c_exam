/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:18:47 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/26 10:18:49 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_hex(unsigned int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	if (nb % 16 < 10)
		ft_putchar((nb % 16) + 48);
	else
		ft_putchar((nb % 16) - 10 + 97);
}

int		atoi_for_print_hex(char *s)
{
	int		res;

	res = 0;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	if (*s == '-')
		return (-1);
	if (*s == '+')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (-1);
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int		nb;

	if (argc == 2)
	{
		nb = atoi_for_print_hex(argv[1]);
		if (nb != -1)
			print_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}
