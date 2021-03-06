/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <agalavan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:54:16 by agalavan          #+#    #+#             */
/*   Updated: 2017/12/04 15:05:26 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : add_prime_sum
** Expected files   : add_prime_sum.c
** Allowed functions: write, exit
** --------------------------------------------------------------------------------
** 
** Write a program that takes a positive integer as argument and displays the sum
** of all prime numbers inferior or equal to it followed by a newline.
** 
** If the number of arguments is not 1, or the argument is not a positive number,
** just display 0 followed by a newline.
** 
** Yes, the examples are right.
** 
** Examples:
** 
** $>./add_prime_sum 5
** 10
** $>./add_prime_sum 7 | cat -e
** 17$
** $>./add_prime_sum | cat -e
** 0$
** $>
*/

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		nbr = nbr * 10;
		nbr = nbr + (str[i] - 48);
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

int		ft_is_prime(int nbr)
{
	int		i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prime_number(int nbr)
{
	int		i;
	int		count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_add_prime_number(ft_atoi(argv[1]));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
