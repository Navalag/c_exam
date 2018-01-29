/*
** Assignment name  : max
** Expected files   : max.c
** Allowed functions: 
** --------------------------------------------------------------------------------
** 
** Write the following function:
** 
** int		max(int* tab, unsigned int len);
** 
** The first parameter is an array of int, the second is the number of elements in
** the array.
** 
** The function returns the largest number found in the array.
** 
** If the array is empty, the function returns 0.
*/

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int 			max;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		++i;
	}
	if (i == len)
		return (max);
	return (0);
}

int		main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d \n", max(array, 10));
}
