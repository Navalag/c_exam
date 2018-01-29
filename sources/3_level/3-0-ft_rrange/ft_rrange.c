/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:00 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 13:23:02 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : ft_rrange
** Expected files   : ft_rrange.c
** Allowed functions: malloc
** --------------------------------------------------------------------------------
** 
** Write the following function:
** 
** int     *ft_rrange(int start, int end);
** 
** It must allocate (with malloc()) an array of integers, fill it with consecutive
** values that begin at end and end at start (Including start and end !), then
** return a pointer to the first value of the array.
** 
** Examples:
** 
** - With (1, 3) you will return an array containing 3, 2 and 1
** - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
** - With (0, 0) you will return an array containing 0.
** - With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		*res;
	int		copy_start;
	int		copy_end;

	i = 0;
	copy_start = start;
	copy_end = end;
	if (start <= end)
		while (start++ <= end)
			i++;
	else
		while (start >= end++)
			i++;
	res = (int *)malloc(sizeof(int *) * i);
	i = 0;
	if (copy_start <= copy_end)
		while (copy_start <= copy_end)
			res[i++] = copy_end--;
	else
		while (copy_start >= copy_end)
			res[i++] = copy_end++;
	return (res);
}

int		main(void)
{
	int		i;
	int		*array;

	array = ft_rrange(0, -3);
	i = 0;
	while (i < 4)
	{
		printf("%i\n", array[i]);
		i++;
	}
	return (0);
}
