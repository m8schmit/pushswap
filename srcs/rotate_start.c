/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 15:29:32 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 16:30:37 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

t_list	*ra(t_list *l_a)
{
	int	tmp;

	tmp = 0;
	if (l_a != NULL)
	{
		tmp = l_a->nbr;
		l_a = lst_erase(l_a, 0);
		l_a = lst_add(l_a, lst_init(tmp));
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
	}
	write(1, "ra ", 3);
	return (l_a);
}

t_list	*rb(t_list *l_b)
{
	int	tmp;

	tmp = 0;
	if (l_b != NULL)
	{
		tmp = l_b->nbr;
		l_b = lst_erase(l_b, 0);
		l_b = lst_add(l_b, lst_init(tmp));
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
	}
	write(1, "rb ", 3);
	return (l_b);
}

void	rr(t_list **l_a, t_list **l_b)
{
	*l_a = ra(*l_a);
	*l_b = rb(*l_b);
	write(1, "rr ", 3);
}
