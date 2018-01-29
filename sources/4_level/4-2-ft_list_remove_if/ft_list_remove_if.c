/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 09:40:36 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/20 09:40:38 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	list;
	t_list	lst_after;
	t_list	lst_before;

	list = *begin_list;
	lst_before = *begin_list;
	while (list)
	{
		if (((*cmp)(lst_ptr->data, data_ref)) == 0)
		{
			lst_after = list->next;
			free(list);
			lst_before->next = lst_after;
			list = lst_after;
		}
		else
			list = lst->next;
	}
}
