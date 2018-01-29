/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:19:06 by agalavan          #+#    #+#             */
/*   Updated: 2018/01/29 11:19:09 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*lst_new_node(int data)
{
	t_list	*tmp;

	if ((tmp = (t_list *)malloc(sizeof(*tmp))) == NULL)
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}

t_list	*lst_insert_at_head(t_list *begin_list, int data)
{
	t_list	*new_node;

	new_node = lst_new_node(data);
	if (begin_list == NULL)
	{
		begin_list = new_node;
		return (new_node);
	}
	new_node->next = begin_list;
	return (new_node);
}

int		main(void)
{
	t_list		*begin_list;
	t_list		*tmp;
	int 		i;

	i = 10;
	begin_list = NULL;
	while (i > 0)
	{
		begin_list = lst_insert_at_head(begin_list, i);
		i--;
	}
	tmp = begin_list;
	while (tmp->next)
	{
		printf("%d, ", tmp->data);
		tmp = tmp->next;
	}
	printf("%d", tmp->data);
	printf("\n\n");
	printf("List contain %i elements\n", ft_list_size(begin_list));
	return (0);
}
