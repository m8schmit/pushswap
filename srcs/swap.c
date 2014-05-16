/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 14:40:21 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/13 14:27:10 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

void	swap(t_list *list)
{
	int	tmp;

	tmp = 0;
	if (list && list->next)
	{
		tmp = list->nbr;
		list->nbr = list->next->nbr;
		list->next->nbr = tmp;
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
	}
}

void	sa(t_list *l_a)
{
	swap(l_a);
	write(1, "sa ", 3);
}

void	sb(t_list *l_b)
{
	swap(l_b);
	write(1, "sb ", 3);
}

void	ss(t_list **l_a, t_list **l_b)
{
	swap(*l_a);
	swap(*l_b);
	write(1, "ss ", 3);
}
