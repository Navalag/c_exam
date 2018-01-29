/*
** Assignment name  : ft_strcpy
** Expected files   : ft_strcpy.c
** Allowed functions: 
** --------------------------------------------------------------------------------
** 
** Reproduce the behavior of the function strcpy (man strcpy).
** 
** Your function must be declared as follows:
** 
** char    *ft_strcpy(char *s1, char *s2);
*/

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *origin;

	origin = s1;
	while ((*s1++ = *s2++) != '\0')
		;
	return (origin);
}

int		main()
{
	char str1[] = "Hello World !";
	char str2[13];

	printf("%s \n", ft_strcpy(str2, str1));
	return (0); 
}
