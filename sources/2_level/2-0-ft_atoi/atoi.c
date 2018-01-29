/*
** Assignment name  : ft_atoi
** Expected files   : ft_atoi.c
** Allowed functions: None
** --------------------------------------------------------------------------------
** 
** Write a function that converts the string argument str to an integer (type int)
** and returns it.
** 
** It works much like the standard atoi(const char *str) function, see the man.
** 
** Your function must be declared as follows:
** 
** int	ft_atoi(const char *str);
*/

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || str[i] == 43)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] < 48 && str[i] > 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int		main()
{
	char str[] = "  		+234123 123df2";
	printf("%d \n", ft_atoi(str));
	return 0;
}
