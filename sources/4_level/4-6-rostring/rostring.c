/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 12:05:48 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/20 12:05:50 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rostring(char *s)
{
	while (*s)
	{
		
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
