

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 14:00:00 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 16:52:13 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

t_list	*lst_init(int nbr)
{
	t_list	*lst_new;

	lst_new = (t_list *)malloc(sizeof(t_list));
	if (lst_new != NULL)
	{
		lst_new->nbr = nbr;
		lst_new->next = NULL;
		lst_new->prev = NULL;
	}
	return (lst_new);
}

t_list	*lst_add(t_list *list, t_list *new)
{
	t_list	*lst_new;

	lst_new = list;
	if (list != NULL)
	{
		while (list->next)
			list = list->next;
		list->next = new;
		new->prev = list;
		return (lst_new);
	}
	return (new);
}

t_list	*lst_add_head(t_list *list, t_list *new)
{
	t_list	*lst_new;

	lst_new = new;
	if (list != NULL)
	{
		new->next = list;
		list->prev = new;
		return (lst_new);
	}
	return (new);
}

void	lst_free(t_list *list)
{
	if (list != NULL)
	{
		while (list->next)
			free(list);
	}
}

t_list	*lst_erase(t_list *list, int flag)
{
	t_list	*new;

	new = list;
	if (flag == 1)
		while (list->next)
			list = list->next;
	else if (list->next != NULL)
		list = list->next;
	else
	{
		free(list);
		return(NULL);
	}
	list->prev->next = NULL;
	list->prev = NULL;
	free(list->prev);
	if (flag == 1)
		return (new);
	else
		return (list);
}

void    lst_print(t_list *list, int rev)
{
    if (list != NULL)
    {
        while (list->next)
        {
            if (rev == 0)
                ft_putnbr(list->nbr);
            list = list->next;
        }
        if (rev == 1)
        {
            while (list->prev)
            {
                ft_putnbr(list->nbr);
                list = list->prev;
            }
        }
        ft_putnbr(list->nbr);
    }
}
