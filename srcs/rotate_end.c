/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 15:38:07 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 16:56:08 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

t_list	*rra(t_list *l_a)
{
	t_list	*new;
	int		tmp;

	new = l_a;
	tmp = 0;
	if (l_a != NULL)
	{
		while (l_a->next)
			l_a = l_a->next;
		tmp = l_a->nbr;
		l_a = new;
		l_a = lst_add_head(l_a, lst_init(tmp));
		l_a = lst_erase(l_a, 1);
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
	}
	write(1, "rra ", 4);
	return (l_a);
}

t_list	*rrb(t_list *l_b)
{
	t_list	*new;
	int		tmp;

	new = l_b;
	tmp = 0;
	if (l_b != NULL)
	{
		while (l_b->next)
			l_b = l_b->next;
		tmp = l_b->nbr;
		l_b = new;
		l_b = lst_add_head(l_b, lst_init(tmp));
		l_b = lst_erase(l_b, 1);
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
	}
	write(1, "rrb ", 4);
	return(l_b);
}

void	rrr(t_list **l_a, t_list **l_b)
{
	*l_a = rra(*l_a);
	*l_b = rrb(*l_b);
	write(1, "rrr ", 4);
}
