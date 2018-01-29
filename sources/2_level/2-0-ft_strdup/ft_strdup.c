/*
** Assignment name  : ft_strdup
** Expected files   : ft_strdup.c
** Allowed functions: malloc
** --------------------------------------------------------------------------------
** 
** Reproduce the behavior of the function strdup (man strdup).
** 
** Your function must be declared as follows:
** 
** char    *ft_strdup(char *src);
*/

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *res;

	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char*)malloc(sizeof(*res) * (len + 1));
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i + 1] = '\0';
	return (res);
}

int		main()
{
	char str[] = "Hello World !";
	char *copy = ft_strdup(str);

	printf("%s \n", copy);
}