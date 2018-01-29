/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 11:55:53 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/20 11:55:57 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_intlen(long int nb)
{
	int		len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char		*res;
	size_t		len;
	long int	num;

	num = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(num) + 1;
	if (!(res = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	res[len - 1] = '\0';
	while (num)
	{
		len--;
		res[len - 1] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
