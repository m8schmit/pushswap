/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 14:46:46 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 17:36:07 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

void	sort(t_list *l_a)
{
	int		min;
	t_list	*l_b;

	min = 0;
	l_b = NULL;
	while (l_a)
	{
		min = srch_min(&l_a);
		while (l_a->nbr != min)
		{
			ft_printf("l_a > %d\n", l_a->nbr);
			l_a = ra(l_a);
		}
		pb(&l_a, &l_b);
	}
	while (l_b)
	{
		pa(&l_a, &l_b);
	}
	write(1, "\n", 1);
	lst_print(l_a, 0);
}

int		srch_min(t_list **l_a)
{
	int		min;
	t_list	*l_tmp;

	l_tmp = *l_a;
	min = l_tmp->nbr;
	while (l_tmp->next)
	{
		if (l_tmp->nbr < min)
			min = l_tmp->nbr;
		l_tmp = l_tmp->next;
	}
	if (l_tmp->nbr < min)
	{
		min = l_tmp->nbr;
		*l_a = rra(*l_a);
	}
	return (min);
}
