/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 09:20:14 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/20 09:20:19 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	a;
	int				tmp;

	a = 1;
	while (a < size)
	{
		if (tab[a] < tab[a - 1])
		{
			tmp = tab[a];
			tab[a] = tab[a - 1];
			tab[a - 1] = tmp;
			a = 0;
		}
		a++;
	}
}

int		main(void)
{
	int tab[10];
	int i = 0;

	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 0;
	tab[6] = 1;
	tab[7] = 7;
	tab[8] = 5;
	tab[9] = 6;
	sort_int_tab(tab, 10);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return (0);
}
