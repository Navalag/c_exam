/*
** Assignment name  : ft_strrev
** Expected files   : ft_strrev.c
** Allowed functions: 
** --------------------------------------------------------------------------------
** 
** Write a function that reverses (in-place) a string.
** 
** It must return its parameter.
** 
** Your function must be declared as follows:
** 
** char    *ft_strrev(char *str);
*/

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

int		main()
{
	char str[] = "Hello World !";
	printf("%s\n", ft_strrev(str));
	return (0);
}
