/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:12:23 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 11:12:25 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assignment name  : ft_list_size
** Expected files   : ft_list_size.c, ft_list.h
** Allowed functions: 
** --------------------------------------------------------------------------------
** 
** Write a function that returns the number of elements in the linked list that's
** passed to it.
** 
** It must be declared as follows:
** 
** int	ft_list_size(t_list *begin_list);
** 
** You must use the following structure, and turn it in as a file called
** ft_list.h:
** 
** typedef struct    s_list
** {
**     struct s_list *next;
**     void          *data;
** }                 t_list;
*/

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list		*tmp;
	int			count;

	tmp = begin_list;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
