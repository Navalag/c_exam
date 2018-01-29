/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:23:29 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/26 10:23:31 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : ft_atoi_base
** Expected files   : ft_atoi_base.c
** Allowed functions: None
** --------------------------------------------------------------------------------
** 
** Write a function that converts the string argument str (base N <= 16)
** to an integer (base 10) and returns it.
** 
** The characters recognized in the input are: 0123456789abcdef
** Those are, of course, to be trimmed according to the requested base. For
** example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
** 
** Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
** 
** Minus signs ('-') are interpreted only if they are the first character of the
** string.
** 
** Your function must be declared as follows:
** 
** int	ft_atoi_base(const char *str, int str_base);
*/

#include <unistd.h>
#include <stdio.h>

static int	check_symb_for_base(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= ('0' + base));
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= ('A' + base - 10)) ||
			(c >= 'a' && c <= ('a' + base - 10)));
}

int			ft_atoi_base(const char *str, int str_base)
{
	int		res;
	int		sign;

	res = 0;
	if (str_base < 0 || str_base > 16)
		return (0);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (check_symb_for_base(*str, str_base))
	{
		if (*str - 'a' >= 0)
			res = res * str_base + (*str - 'a' + 10);
		else if (*str - 'A' >= 0)
			res = res * str_base + (*str - 'A' + 10);
		else
			res = res * str_base + (*str - '0');
		str++;
	}
	return (res * sign);
}

int		main(int argc, char **argv)
{
	int 	base = 16;

	if (argc == 2)
	{
		printf("%d", ft_atoi_base(argv[1], base));
	}
	printf("\n");
	return (0);
}
