/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 16:05:30 by agalavan          #+#    #+#             */
/*   Updated: 2017/12/05 16:05:33 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int n;
	int i;

	n = 0;
	i = 1;
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		while (i < nb)
		{
			i = n * n;
			n++;
		}
	}
	n--;
	if (i == nb)
		return (n);
	return (0);
}

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (ft_sqrt(nb) > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int nb)
{
	int		i;

	i = 2;
	while (nb > 1)
	{
		while (ft_is_prime(i) && nb % i == 0)
		{
			nb = nb / i;
			printf("%d", i);
			if (nb != 1)
				printf("*");
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		param;

	param = 0;
	if (argc == 2)
	{
		param = atoi(argv[1]);
		if (param == 1)
		{
			printf("1\n");
			return (0);
		}
		fprime(param);
	}
	printf("\n");
	return (0);
}
