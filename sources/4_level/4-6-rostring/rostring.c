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

#include <unistd.h>

void	rostring(char *s)
{
	int		i;
	int		j;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = i;
	while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
		while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			write(1, &s[i], 1);
			i++;
		}
		if (s[i] || (s[i - 1] != ' ' && s[i - 1] != '\n' && s[i - 1] != '\t'))
			write(1, " ", 1);
	}
	while (s[j] && s[j] != ' ' && s[j] != '\n' && s[j] != '\t')
		write(1, &s[j++], 1);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
